#include <map>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <iostream>
#include <signal.h>
#include <stdarg.h>
#include <functional>
#include <arpa/inet.h>
#include <sys/epoll.h>
#include <sys/socket.h>
#include <netinet/in.h>

// #include "../MyHeader/Epoll.h"
#include "../MyHeader/Server.h"
#include "../MyHeader/GlobalFunction.h"

Server::Server()
{
}

Server::Server(Epoll *_epoll, int port)
{
    epoll = _epoll;
    listen_fd = epoll->GetServerListeningFd(port);
    listen_port = port;
    tmpBuffer = new uint8_t[MAX_BUFFER_SIZE];

    epoll->AddEventListen(listen_fd);
}

Server::~Server()
{
    delete epoll;
}

void Server::AddConnection(int connection_fd)
{
    if (!connections.count(connection_fd))
    {
        connections[connection_fd] = new RingBuffer();
    }
}

void Server::DestroyConnection(int connection_fd)
{
    if (connections.count(connection_fd))
    {
        delete connections[connection_fd];
        connections.erase(connection_fd);
        close(connection_fd);
    }
}

void Server::DealConnection(std::map<int, RingBuffer *> &connections, int event_fd)
{
    if (listen_fd == event_fd)
    {
        int accept_fd = epoll->AcceptEvent(listen_fd);
        if (accept_fd < 0)
        {
            epoll->PrintErrorLog(1, errno, "accept failed");
        }
        else
        {
            epoll->SetNoBlocking(accept_fd);

            int status = epoll->AddEventListen(accept_fd);
            if (status == -1)
            {
                DestroyConnection(accept_fd);
                epoll->PrintErrorLog(1, errno, "epoll_ctl add Connection fd failed");
            }
            else
            {
                AddConnection(accept_fd);
            }
        }
    }
    else
    {
        ssize_t offset = 0, recv_size = 0;

        // ------------New Version--------------
        auto &iter = connections[event_fd];

        while ((recv_size = recv(event_fd, tmpBuffer + offset, MAX_BUFFER_SIZE - offset, MSG_DONTWAIT)) > 0)
        {
            offset += recv_size;
            if (offset <= iter->GetRemain())
            {
                iter->AddBuffer(tmpBuffer, offset);
                offset = 0;
            }
            else
            {
                offset -= iter->GetRemain();
                iter->AddBuffer(tmpBuffer, iter->GetRemain());
            }

            bool flag_header = false, flag_body = false;
            do
            {
                flag_header = false, flag_body = false;
                int tail = 0, bodyLength = 0, body_size = 0, body_type = 0, body_from = 0;

                // Deal Header
                if (body_size <= 0 && iter->GetCapacity() >= HEAD_SIZE)
                {
                    bodyLength = ByteToInt(iter->GetBuffer(HEAD_SIZE));

                    body_from = bodyLength >> PROTO_OFFSET;
                    body_type = bodyLength >> TYPE_OFFSET & BIT_8;
                    body_size = bodyLength & BIT_16;

                    flag_header = true;
                }

                // Deal Body
                if (body_size > 0 && iter->GetCapacity() >= body_size + HEAD_SIZE)
                {
                    // std::cout << "Received " << iter->GetCapacity() << " bytes from client" << std::endl;
                    std::cout << "Received Package Size = " << body_size + HEAD_SIZE << " bytes from client" << std::endl;

                    flag_body = true;
                }

                // Success get header and body
                if (flag_header && flag_body)
                {
                    // Dynamic analysis type of proto

                    AnalysisMessage(event_fd, iter->GetBuffer(HEAD_SIZE + body_size), body_from, body_type, body_size);

                    // Remember Popbuffer
                    iter->PopBuffer(HEAD_SIZE + body_size);
                }
            } while (flag_header && flag_body);
        }

        if (recv_size < 0)
        {
            if (errno == EAGAIN || errno == EWOULDBLOCK)
            {
                std::cout << "data read over" << std::endl;
            }
            else
            {
                DestroyConnection(event_fd);
                std::cerr << "Failed to read from connection" << std::endl;
                return;
            }
        }
        else if (recv_size == 0)
        {
            DestroyConnection(event_fd);
            std::cout << "Connection closed by remote host" << std::endl;
            return;
        }
    }
}

void Server::AnalysisMessage(int enent_fd, uint8_t *buf, int from, int type, int size)
{
    std::cout << "Over" << std::endl;
}

void Server::StartListen()
{
    epoll->StartListen(&Server::DealConnection, this, ref(connections));
}
