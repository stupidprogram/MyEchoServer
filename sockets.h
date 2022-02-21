//
// Created by zero on 1/16/22.
//

#ifndef ECHOSERVER_SOCKETS_H
#define ECHOSERVER_SOCKETS_H

#include <sys/uio.h>

namespace sockets
{
    int createAcceptSocket();
    size_t readv(int, struct iovec*, int);
    unsigned short port_hton(unsigned short);
    unsigned int  addr_atoi(const char*);
}


#endif //ECHOSERVER_SOCKETS_H
