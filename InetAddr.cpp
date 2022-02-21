//
// Created by zero on 1/16/22.
//

#include "InetAddr.h"
#include "sockets.h"

InetAddr::InetAddr(const char* addr, unsigned short port)
        : addr_(sockets::addr_atoi(addr)),
          port_(sockets::port_hton(port))
{

}

InetAddr::InetAddr(unsigned short port)
        : addr_(sockets::addr_atoi("0.0.0.0")),
          port_(sockets::port_hton(port))
{

}

InetAddr::InetAddr(struct sockaddr_in* sock)
        : addr_(sock->sin_addr.s_addr),
          port_(sock->sin_port)
{

}