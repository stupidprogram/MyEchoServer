//
// Created by zero on 1/16/22.
//

#ifndef ECHOSERVER_SOCKET_H
#define ECHOSERVER_SOCKET_H

#include "InetAddr.h"

class Socket
{
public:
    explicit Socket(int);

    Socket(const Socket&) = delete;
    Socket& operator=(const Socket&) = delete;

    void bind(const InetAddr&);
    void listen();

    int fd()
    { return fd_; }

    void setPortReuse();

    ~Socket();

private:
    int fd_;
};


#endif //ECHOSERVER_SOCKET_H
