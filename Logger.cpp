//
// Created by zero on 2/11/22.
//

#include "Logger.h"
#include <cstdio>

#include "simpleTime.h"

static Logger::LoggerLevel l_level = Logger::LoggerLevel::TRACE;

void defaultOutput(const char* words, int len)
{
    ::fwrite(words, len, 1, stdout);
}

static const char* levelInfo[] =
        {
                "TRACE",
                "INFO",
                "DEBUG",
                "WARNING",
                "FATAL"
        };


Logger::Logger(LoggerLevel level)
        : lever_(level),
          stream_(),
          output_(defaultOutput)
{
    stream_ << getCurrentTime() << " " << "log information level [ " << levelInfo[lever_] << " ]:\t";
}

Logger::LoggerLevel Logger::level()
{
    return l_level;
}

inline void Logger::setLoggerLevel(Logger::LoggerLevel level)
{
    l_level = level;
}

Logger::~Logger()
{
    stream_ << "\n";
    output_(stream_.buf(), stream_.len());
    if (lever_ == FATAL)
    {
        abort();
    }
}