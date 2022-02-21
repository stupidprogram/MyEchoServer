//
// Created by zero on 1/17/22.
//

#ifndef ECHOSERVER_CHANNEL_H
#define ECHOSERVER_CHANNEL_H

#include <functional>

#include "EventLoop.h"

class Channel
{
    using EventCall = std::function<void ()>;
public:
    Channel(EventLoop*, int);

    void enableReading();
    void disableReading();
    void enableWritting();
    void disableWritting();
    void enableAll();
    void disableAll();

    void handleEvent();

    void setHandleRead(EventCall cb)
    { handleRead = std::move(cb); }

    void setHandleWrite(EventCall cb)
    { handleWrite = std::move(cb); }

    void setHandleClose(EventCall cb)
    { handleClose = std::move(cb); }

    int fd()
    { return fd_; }

    void setReturnEvent(int event)
    { returnEvent_ = event; }

    int getReturnEvent()
    { return returnEvent_; }

    void setEvent(int event)
    { event_ = event; }

    int getEvent()
    { return event_; }

    void remove();

private:
#ifdef DEBUG
    static int mark;
    int id_;
#endif
    static const int kRead;
    static const int kWrite;
    static const int kNone;

    int fd_;
    EventLoop* loop_;
    int index_;
    int event_;
    int returnEvent_;

    EventCall handleRead;
    EventCall handleWrite;
    EventCall handleClose;

    void update();

};


#endif //ECHOSERVER_CHANNEL_H
