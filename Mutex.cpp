//
// Created by flower on 2022/2/24.
//

#include "Mutex.h"

#include "Logger.h"

Mutex::Mutex()
{
    int ret = ::pthread_mutex_init(&mutex_, nullptr);
    if (ret != 0)
    {
        LOG_WARNING << "Mutex has not been init in Mutex constructor!";
    }
}

void Mutex::lock()
{
    int ret = ::pthread_mutex_lock(&mutex_);
    if (ret != 0)
    {
        LOG_WARNING << "pthread_mutex_lock failed in Mutex::lock";
    }
}

void Mutex::unlock()
{
    int ret = ::pthread_mutex_unlock(&mutex_);
    if (ret != 0)
    {
        LOG_WARNING << "pthread_mutex_unlock failed in Mutex::unlock";
    }
}