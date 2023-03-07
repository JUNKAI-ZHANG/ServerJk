#include "../MyHeader/GlobalDefine.h"

RingBuffer::RingBuffer()
{
    _buffer = new uint8_t[MAX_BUFFER_SIZE];
    _begin = _end = _capacity = 0;
    _remain = MAX_BUFFER_SIZE;
}

RingBuffer::~RingBuffer()
{
    std::cout << "RingBuffer Was Deconstruct" << std::endl;
    delete _buffer;
}

RingBuffer::RingBuffer(const RingBuffer& ringBuffer) 
{
}

bool RingBuffer::AddBuffer(uint8_t* buffer, int32_t size) 
{
    if (size < 0 || size > MAX_BUFFER_SIZE) 
    {
        std::cout << "Error from RingBuffer -> AddBuffer() : Please check size is wrong!" << std::endl;
        return false;
    }
    if (size > _remain) 
    {
        std::cout << "Error from RingBuffer -> AddBuffer() : Size too large" << std::endl;
        return false;
    }

    for (int32_t i = 0; i < size; i++) 
    {
        _buffer[_end] = buffer[i];
        _end = (_end + 1) % MAX_BUFFER_SIZE;
    }

    _capacity += size;
    _remain -= size;
    return true;
}

bool RingBuffer::PopBuffer(int32_t size)
{
    if (size < 0 || size > MAX_BUFFER_SIZE) 
    {
        std::cout << "Error from RingBuffer -> PopBuffer() : Please check size is wrong!" << std::endl;
        return false;
    }
    if (size > _capacity) 
    {
        std::cout << "Error from RingBuffer -> PopBuffer() : Size too large" << std::endl;
        return false;
    }

    _begin = (_begin + size) % MAX_BUFFER_SIZE;

    _capacity -= size;
    _remain += size;
    return true;
}

uint8_t *RingBuffer::GetBuffer(int32_t len) 
{
    int32_t start = _begin;
    uint8_t* ret = new uint8_t[len];

    for (uint32_t i = 0; i < len; i++) 
    {
        ret[i] = _buffer[start];
        start = (start + 1) % MAX_BUFFER_SIZE;
    }

    return ret;
}

int32_t RingBuffer::GetRemain() 
{
    return _remain;
}

int32_t RingBuffer::GetCapacity() 
{
    return _capacity;
}

uint8_t RingBuffer::operator [] (int id)
{
    if (id < 0 || id >= MAX_BUFFER_SIZE)
    {
        std::cout << "Error from RingBuffer -> Operator[] : Please check id is wrong!" << std::endl;
        return 0;
    }
    return _buffer[id];
}