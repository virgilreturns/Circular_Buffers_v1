#ifndef CIRCULAR_BUFFERS_H

#include <stdbool.h>

#define CIRCULAR_BUFFERS_H

#define CB_CAPACITY1 100
#define CB_CAPACTIY2 1000
#define CB_CAPACITY3 10000

#define MAX_CAPACITY CB_CAPACITY1

#define CB_DATATYPE int


typedef struct {
    CB_DATATYPE *const arr; // mutable data, but address is const
    int head;
    int tail;
    const int capacity;
} CB_TypeDef;

inline CB_TypeDef CB_Create(int capacity, CB_DATATYPE* mem_location);

inline bool CB_IsFull(CB_TypeDef* cb);
inline void CB_Push(CB_TypeDef* cb, CB_DATATYPE* data_in);
inline void CB_Pop(CB_TypeDef* cb, CB_DATATYPE* data_out);


#endif // circular_buffers_h