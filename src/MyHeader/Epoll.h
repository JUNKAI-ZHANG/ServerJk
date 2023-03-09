#ifndef EPOLL_H
#define EPOLL_H

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

#define MAX_LISTEN_COUNT 128

class Epoll
{
public:
    Epoll();

    virtual ~Epoll();

    int CreateEpoll();

    void SetNoBlocking(int fd);

    int GetServerListeningFd(int port);

    int AddEventListen(int listen_fd);

    int AcceptEvent(int event_fd);

    void PrintErrorLog(int status, int errorNumber, const char *const fmt, ...);

    template <typename _Callable, typename... _Args>
    void StartListen(_Callable &&__f, _Args &&...__args)
    {
        struct epoll_event event;
        struct epoll_event *events = (epoll_event *)calloc(MAX_LISTEN_COUNT, sizeof(event));

        while (true)
        {
            // Blocking read event
            int n = epoll_wait(epoll_fd, events, MAX_LISTEN_COUNT, -1);

            if (n == -1)
            {
                std::cerr << "Failed to wait for events" << std::endl;
                break;
            }

            for (int i = 0; i < n; i++)
            {
                if ((events[i].events & EPOLLERR) || (events[i].events & EPOLLHUP) || !(events[i].events & EPOLLIN))
                {
                    std::cerr << "Epoll error : (EPOLLERR || EPOLLHUP || !EPOLLIN)" << std::endl;
                    close(events[i].data.fd);
                    continue;
                }

                int conn_fd = events[i].data.fd;

                auto func = std::bind(std::forward<_Callable>(__f), std::forward<_Args>(__args)..., conn_fd);

                func();
            }
        }
        delete[] events;
    }

private:
    int epoll_fd = -1;
};

#endif