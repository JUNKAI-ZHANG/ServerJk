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

#define MAX_LISTEN_COUNT  32
#define LISTEN_QUEUE_SIZE 256

Epoll::Epoll()
{

}

Epoll::Epoll()
{

}

Epoll::~Epoll()
{
    close(epoll_fd);
}

/*
 * @return return success ? 1 : -1;
 */
int Epoll::CreateEpoll()
{
    epoll_fd = epoll_create(1);
    if (epoll_fd == -1)
    {
        std::cerr << "Failed to create epoll instance" << std::endl;
        return -1;
    }

    return 1;
}


void Epoll::SetNoBlocking(int fd)
{
    fcntl(fd, F_SETFL, O_NONBLOCK);
}

/*
 * @return return NoBlocking FileDescription Of Server's Port
*/
int Epoll::GetServerListeningFd(int port)
{
    int listen_fd = socket(PF_INET, SOCK_STREAM, 0);
	// SOCK_STREAM : TCP
	// SOCK_DRGAM  : UDP
	SetNoBlocking(listen_fd);

	struct sockaddr_in server_addr;
	bzero(&server_addr, sizeof(server_addr));

	server_addr.sin_family = AF_INET;
	server_addr.sin_addr.s_addr = htonl(INADDR_ANY);
	server_addr.sin_port = htons(port);

	int rt1 = bind(listen_fd, (struct sockaddr *)&server_addr, sizeof(server_addr));
	if (rt1 < 0)
	{
		PrintErrorLog(1, errno, "Error in GetServerListeningFd() : Bind failed");
	}

	int rt2 = listen(listen_fd, LISTEN_QUEUE_SIZE);
	if (rt2 < 0)
	{
		PrintErrorLog(1, errno, "Error in GetServerListeningFd() : Listen failed");
	}

	signal(SIGPIPE, SIG_IGN);

	return listen_fd;
}

/*
* @return return (Add listen_fd Success?) 1 : -1;
*/
int Epoll::AddEventListen(int listen_fd)
{
    struct epoll_event event;

	event.events = EPOLLIN;
	event.data.fd = listen_fd;

    if (epoll_ctl(epoll_fd, EPOLL_CTL_ADD, listen_fd, &event) == -1)
	{
		PrintErrorLog(1, errno, "Error in AddEventListen() : Epoll_ctl add listen_fd failed");
        return -1;
	}
    return 1;
}

void Epoll::PrintErrorLog(int status, int errorNumber, const char *const fmt, ...)
{
    va_list ap;
	va_start(ap, fmt);
	vfprintf(stderr, fmt, ap);
	va_end(ap);

	if (errorNumber != 0)
	{
		fprintf(stderr, ": %s (%d)\n", strerror(errorNumber), errorNumber);
	}
}

template <typename _Callable, typename... _Args>
void Epoll::StartListen(_Callable &&__f, _Args &&...__args)
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

            auto func = std::bind(std::forward<_Callable>(__f), std::forward<_Args>(__args)..., events[i].data.fd);

            func();
        }
    }

    delete[] events;
}
