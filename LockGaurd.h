//
// Created by flower on 2022/2/24.
//

#ifndef ECHOSERVER_LOCKGAURD_H
#define ECHOSERVER_LOCKGAURD_H

#include "Mutex.h"

class LockGaurd
{
public:
    LockGaurd(Mutex&);
    ~LockGaurd();

private:
    Mutex& mutex_;
};


#endif //ECHOSERVER_LOCKGAURD_H
