#ifndef SERVER_H
#define SERVER_H

#include <map>

#include "./Epoll.h"
#include "./RingBuffer.h"

#define HEAD_SIZE           4
#define TYPE_OFFSET         16
#define PROTO_OFFSET        24

#define BIT_8               ((1 << 8) - 1)               
#define BIT_16              ((1 << 16) - 1)               

#define USER_LOGIN_INFO     1
#define USER_POSITION_INFO  2
#define USER_LOGIN_RESP     3
#define USER_DROP_INFO      4

#define FROM_CLIENT         1 
#define FROM_GATESERVER     2 
#define FROM_GAMESERVER     3 
#define FROM_DBSERVER       4 

// #define MAX_LISTEN_COUNT    256
#define MAX_BUFFER_SIZE     131702

class Server
{
public:
    Server();

    Server(Epoll *_epoll, int port);

    virtual ~Server();

    void AddConnection(int connection_fd);

    void DestroyConnection(int connection_fd);

    void DealConnection(std::map<int, RingBuffer *> &connections, int event_fd);

    virtual void AnalysisMessage(int enent_fd, uint8_t* buf, int from, int type, int size);

    void StartListen();


private:
    int listen_fd = -1;

    int listen_port = -1;

    Epoll *epoll = nullptr;

    std::map<int, RingBuffer *> connections;

    uint8_t* tmpBuffer;
};

#endif