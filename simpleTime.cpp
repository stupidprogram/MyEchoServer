//
// Created by flower on 2022/2/18.
//

#include "simpleTime.h"

#include <sys/time.h>
#include <iomanip>
#include <cstring>
#include <sstream>

std::string getCurrentTime()
{
    struct timeval cur;
    ::bzero(&cur, sizeof(cur));
    ::gettimeofday(&cur, nullptr);
    std::ostringstream buffer;
    buffer << std::put_time(std::localtime(&cur.tv_sec), "%F %T") << ":" << std::to_string(cur.tv_usec);
    return buffer.str();
}
