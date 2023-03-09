#include <iostream>

#include "../../MyHeader/Epoll.h"
#include "../../MyHeader/Server.h"


int main()
{
    std::cout << "hello" << std::endl;
    Server *gateserver = new Server(new Epoll(), 8080);

    gateserver->StartListen();

    return 0;
}