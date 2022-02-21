//
// Created by zero on 1/16/22.
//

#include "sockets.h"

#include <sys/socket.h>
#include <netinet/in.h>
#include <netinet/ip.h>
#include <arpa/inet.h>

int sockets::createAcceptSocket()
{
    int fd = ::socket(PF_INET, SOCK_STREAM, 0);
    return fd;
}

size_t sockets::readv(int fd, struct iovec* iov, int len)
{
    size_t n = ::readv(fd, iov, len);
    return n;
}

unsigned short sockets::port_hton(unsigned short port)
{
    return ::htons(port);
}

unsigned int sockets::addr_atoi(const char* a_addr)
{
    return ::inet_addr(a_addr);
}