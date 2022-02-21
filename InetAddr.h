//
// Created by zero on 1/16/22.
//

#ifndef ECHOSERVER_INETADDR_H
#define ECHOSERVER_INETADDR_H

#include <netinet/in.h>

class InetAddr
{
public:
    InetAddr(unsigned short port);
    InetAddr(const char*, unsigned short);
    InetAddr(struct sockaddr_in*);

    unsigned int getAddr() const
    { return addr_; }

    unsigned short getPort() const
    { return port_; }

private:
    unsigned int addr_;
    unsigned short port_;
};


#endif //ECHOSERVER_INETADDR_H
