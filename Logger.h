//
// Created by zero on 2/11/22.
//

#ifndef ECHOSERVER_LOGGER_H
#define ECHOSERVER_LOGGER_H

#include "LogStream.h"
#include <fstream>
#include <functional>

class Logger
{
    using Output = std::function<void (const char* words, size_t len)>;
public:
    enum LoggerLevel
    {
        TRACE,
        INFO,
        Debug,
        WARNING,
        FATAL
    };
    explicit Logger(LoggerLevel);
    Logger(const Logger&) = delete;
    Logger& operator=(const Logger&) = delete;

    ~Logger();

    LogStream& Get()
    { return stream_; }

    void setOutput(Output out)
    { output_ = std::move(out); }

    static LoggerLevel level();

    static void setLoggerLevel(LoggerLevel);

private:
    LogStream stream_;
    LoggerLevel lever_;
    Output output_;
};

#define LOG_TRACE if (Logger::level() <= Logger::LoggerLevel::TRACE) \
Logger(Logger::LoggerLevel::TRACE).Get()
#define LOG_INFO if (Logger::level() <= Logger::LoggerLevel::INFO) \
Logger(Logger::LoggerLevel::INFO).Get()
#define LOG_DEBUG if (Logger::level() <= Logger::LoggerLevel::Debug) \
Logger(Logger::LoggerLevel::Debug).Get()
#define LOG_WARNING Logger(Logger::LoggerLevel::WARNING).Get()
#define LOG_FATAL Logger(Logger::LoggerLevel::FATAL).Get()
#endif //ECHOSERVER_LOGGER_H
