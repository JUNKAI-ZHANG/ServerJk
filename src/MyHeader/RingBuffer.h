#ifndef RING_BUFFER_H
#define RING_BUFFER_H

#include <stdint.h>

class RingBuffer {
public:
    uint8_t* _buffer;
    int32_t _begin;
    int32_t _end;
    int32_t _remain;
    int32_t _capacity;

public:
    RingBuffer();

    ~RingBuffer();

    RingBuffer(const RingBuffer& ringBuffer);

    bool AddBuffer(uint8_t* buffer, int32_t size);

    bool PopBuffer(int32_t size);

    uint8_t* GetBuffer(int32_t len);

    int32_t GetRemain();

    int32_t GetCapacity();

    uint8_t operator[] (int id);
};

#define MAX_BUFFER_SIZE 131702

#endif
