//
// Created by zero on 1/24/22.
//

#include "Acceptor.h"

#include <sys/socket.h>
#include <netinet/in.h>
#include <iostream>
#include <unistd.h>

#include "sockets.h"
#include "Logger.h"

Acceptor::Acceptor(EventLoop* loop, const InetAddr& addr)
        : loop_(loop),
          fd_(sockets::createAcceptSocket()),
          acceptSocket_(new Socket(fd_)),
          acceptChannel_(new Channel(loop_, fd_))
{
    acceptSocket_->setPortReuse();
    acceptSocket_->bind(addr);
    acceptSocket_->listen();
    acceptChannel_->setHandleRead(std::bind(&Acceptor::handleRead, this));
    acceptChannel_->enableReading();
}


void Acceptor::handleRead()
{
    struct sockaddr_in remoteAddr {};
    socklen_t remoteLen = sizeof remoteAddr;

    int rfd = ::accept(fd_, reinterpret_cast<struct sockaddr*>(&remoteAddr), &remoteLen);
    if (rfd < 0)
    {
        LOG_FATAL << "accept error in Acceptor::handleRead!";
    }
    else
    {
        if (connectionCallback_)
        {
            const InetAddr addr(&remoteAddr);
            connectionCallback_(rfd, addr);
        }
        else
        {
            ::close(rfd);
        }
    }
}

void Acceptor::enableReading()
{
    acceptChannel_->enableReading();
}