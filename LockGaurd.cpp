//
// Created by flower on 2022/2/24.
//

#include "LockGaurd.h"

LockGaurd::LockGaurd(Mutex& mutex)
        : mutex_(mutex)
{
    mutex_.lock();
}

LockGaurd::~LockGaurd()
{
    mutex_.unlock();
}
