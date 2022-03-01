//
// Created by flower on 2022/2/24.
//

#ifndef ECHOSERVER_THREAD_H
#define ECHOSERVER_THREAD_H

#include <functional>
#include <pthread.h>

class Thread
{
public:
    Thread(std::function<void()>);
    Thread(const Thread&) = delete;
    Thread& operator=(const Thread&) = delete;
    void detach();
    void helperFunc();

private:
    pthread_t pid;
    std::function<void ()> call_;
};


#endif //ECHOSERVER_THREAD_H
