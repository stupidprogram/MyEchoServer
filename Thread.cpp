//
// Created by flower on 2022/2/24.
//

#include "Thread.h"

#include <pthread.h>

#include "Logger.h"

static void* exec(void* obj)
{
    auto cur = reinterpret_cast<Thread*>(obj);
    cur->helperFunc();
    return nullptr;
}

Thread::Thread(std::function<void()> call)
: call_(std::move(call))
{
    int ret = ::pthread_create(&pid, nullptr, exec, this);
    if (ret != 0)
    {
        LOG_FATAL << "pthread_create failed in Thread constructor";
    }
}

void Thread::helperFunc()
{
    call_();
}

void Thread::detach()
{
    int ret = ::pthread_detach(pid);
    if (ret != 0)
    {
        LOG_WARNING << "pthread_detach failed in Thread::detach";
    }
}