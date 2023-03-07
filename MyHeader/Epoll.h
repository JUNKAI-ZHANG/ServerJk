#ifndef EPOLL_H
#define EPOLL_H

class Epoll
{
public:
    Epoll() {};

    virtual ~Epoll() {};

    int CreateEpoll() {};

    void SetNoBlocking(int fd) {};

    int GetServerListeningFd(int port) {};

    int AddEventListen(int listen_fd) {};

    void PrintErrorLog(int status, int errorNumber, const char *const fmt, ...) {};

    template <typename _Callable, typename... _Args>
    void StartListen(_Callable &&__f, _Args &&...__args);

private :
     int epoll_fd = -1;
};

#endif