//
// Created by zero on 1/17/22.
//

#include "Buffer.h"

#include <sys/uio.h>
#include <algorithm>
#include <unistd.h>

#include "sockets.h"

Buffer::Buffer()
        :data_(10),
         writeIndex_(0),
         readIndex_(0)
{

}

size_t Buffer::readFd(int fd)
{
    char extraBuf[65535];
    struct iovec iov[2];
    size_t couldWrite = writeableBytes();
    iov[0].iov_base = &*data_.begin() + readIndex_;
    iov[0].iov_len = couldWrite;

    iov[1].iov_base = extraBuf;
    iov[1].iov_len = 65535;

    size_t n = sockets::readv(fd, iov, 2);

    if (n > couldWrite)
    {
        writeIndex_ = data_.size();
        append(extraBuf, n - couldWrite);
    }
    else
    {
        writeIndex_ += n;
    }

    return n;
}

void Buffer::makeSpace(size_t n)
{
    std::copy(data_.begin() + readIndex_, data_.begin() + writeIndex_, data_.begin());
    writeIndex_ -= readIndex_;
    readIndex_ = 0;
    if (writeableBytes() < n)
    {
        data_.resize(writeIndex_ + n);
    }
}

void Buffer::append(const char* extraBuf, size_t n)
{
    if (writeableBytes() < n)
    {
        makeSpace(n);
    }

    std::copy(extraBuf, extraBuf  + n, &*data_.begin() + writeIndex_);
    writeIndex_ += n;
}

size_t Buffer::writeFd(int fd)
{
    ssize_t n = ::write(fd, &*data_.begin() + readIndex_, readableBytes());
    if (n > 0)
    {
        readIndex_ += n;
    }
    return n;
}

std::string Buffer::getAsString()
{
    std::string res = std::string(&*data_.begin() + readIndex_, readableBytes());
    readIndex_ = writeIndex_;
    return res;
}