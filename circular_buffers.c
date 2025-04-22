/*
    @file       circular_buffers.c

    @author     virgilreturns
    @date       4/22/2025

    @about      A circular buffer is a data structure
                typically used in cases where the CPU
                is reading and writing simultaneously
                from a sensor.
*/


#include "circular_buffers.h"

#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>

inline CB_TypeDef CB_Create(int capacity, CB_DATATYPE* mem_location){
    CB_TypeDef cb = {.arr = mem_location, .capacity = capacity};
    cb.head = 0; 
    cb.tail = 0; 
    return cb;
}

inline bool CB_IsFull(CB_TypeDef* cb){
    return ((cb->head + 1) == (cb->tail));
}

inline void CB_Push(CB_TypeDef* cb, CB_DATATYPE* data_in){ 
    int next;
    next = 1 + cb->head;

    if (next == MAX_CAPACITY){ // determine next head index
        next = 0;
    }

    cb->arr[cb->head] = *data_in;
    cb->head = next;
}

inline void CB_Pop(CB_TypeDef* cb, CB_DATATYPE* data_out){
    int next;
    next = cb->tail + 1;
    *data_out = cb->arr[cb->tail];

    if (next == MAX_CAPACITY){ // determine next head index
        next = 0;
    }
    
    cb->tail = next;
}
