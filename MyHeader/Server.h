#ifndef SERVER_H
#define SERVER_H

#include "./Epoll.h"

#define MAX_LISTEN_COUNT 512

class Server
{
public:
    Server() {};

    Server(Epoll *_epoll, int port) {};

    virtual ~Server() {};

    void DealConnection() {};


private:
    int listen_fd = -1;

    int listen_port = -1;

    Epoll *epoll = nullptr;


};

#endif