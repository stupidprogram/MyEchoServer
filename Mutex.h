//
// Created by flower on 2022/2/24.
//

#ifndef ECHOSERVER_MUTEX_H
#define ECHOSERVER_MUTEX_H

#include <pthread.h>

class Mutex
{
public:
    Mutex();
    void lock();
    void unlock();

private:
    pthread_mutex_t mutex_;
};


#endif //ECHOSERVER_MUTEX_H
