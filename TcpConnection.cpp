//
// Created by zero on 1/17/22.
//

#include "TcpConnection.h"

#include <cstdio>
#include <iostream>

#include "Logger.h"

TcpConnection::TcpConnection(EventLoop* loop, int fd, const std::string& name)
        : socket_(new Socket(fd)),
          channel_(new Channel(loop, fd)),
          loop_(loop),
          inputeBuffer_(),
          outputBuffer_(),
          name_(name)
{
    channel_->setHandleRead(std::bind(&TcpConnection::handleRead, this));
    channel_->setHandleWrite(std::bind(&TcpConnection::handleWrite, this));
    channel_->setHandleClose(std::bind(&TcpConnection::handleClose, this));
    channel_->enableReading();
}

void TcpConnection::handleRead()
{
    size_t n = inputeBuffer_.readFd(channel_->fd());

    if (n == 0)
    {
        handleClose();
    }
    else if (n > 0)
    {
        if (readCallback_)
        {
            readCallback_(shared_from_this(), &inputeBuffer_);
        }
    }
    else
    {
        handleError();
    }
}

void TcpConnection::handleWrite()
{
    size_t n = outputBuffer_.writeFd(channel_->fd());
    if (n > 0)
    {
        if (outputBuffer_.readableBytes() == 0 && writeCallback_)
        {
            writeCallback_();
        }
    }
}

void TcpConnection::handleClose()
{
    channel_->disableAll();
    closeCallback_(shared_from_this());
}

void TcpConnection::send(const std::string& str)
{
    outputBuffer_.append(str.c_str(), str.size());
    if (loop_->runInLoop())
    {
        sendInLoop();
    }
    else
    {
        loop_->queueInLoop(std::bind(&TcpConnection::sendInLoop, this));
    }
}

void TcpConnection::handleError()
{

}

void TcpConnection::sendInLoop()
{
    size_t n = outputBuffer_.writeFd(channel_->fd());

    if (n < 0)
    {
        LOG_FATAL << "error when wirte bytes in sendInLoop!";
    }
    else
    {
        LOG_TRACE << "write " << n << " bytes!";
    }
}

void TcpConnection::connectionDestroy()
{
    channel_->disableAll();
    channel_->remove();
}