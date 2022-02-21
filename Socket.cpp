//
// Created by zero on 1/16/22.
//

#include "Socket.h"

#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netinet/ip.h>
#include <iostream>

Socket::Socket(int fd)
        : fd_(fd)
{

}

Socket::~Socket()
{
    ::close(fd_);
}

void Socket::bind(const InetAddr& addr)
{
    struct sockaddr_in local;

    local.sin_family = PF_INET;
    local.sin_port = addr.getPort();
    local.sin_addr.s_addr = addr.getAddr();

    int ret = ::bind(fd_, reinterpret_cast<struct sockaddr*>(&local), sizeof local);
    if (ret < 0)
    {
        std::cerr << "Socket::bind error!" << std::endl;
    }
}

void Socket::listen()
{
    int ret = ::listen(fd_, 128);
    if (ret < 0)
    {
        std::cerr << "Socket::listen error!" << std::endl;
    }
}

void Socket::setPortReuse()
{
    int one = 1;
    ::setsockopt(fd_, SOL_SOCKET, SO_REUSEADDR, &one, sizeof(one));
}