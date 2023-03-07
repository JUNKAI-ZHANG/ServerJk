#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <iostream>
#include <signal.h>
#include <stdarg.h>
#include <arpa/inet.h>
#include <sys/epoll.h>
#include <sys/socket.h>
#include <netinet/in.h>

#include "../MyHeader/Epoll.h"
#include "../MyHeader/Server.h"


Server::Server()
{

}

Server::Server(Epoll *_epoll, int port)
{
    epoll = _epoll;
    listen_port = port;

    listen_fd = epoll -> GetServerListeningFd(port);
    epoll -> AddEventListen(listen_fd);
}

Server::~Server()
{
    delete epoll;
}

