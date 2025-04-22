/*
    @file       circular_buffers.c

    @author     virgilreturns
    @date       4/22/2025

*/

#ifndef CIRCULAR_BUFFERS_H
#define CIRCULAR_BUFFERS_H
#include "circular_buffers.h"

#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>

CB_TypeDef CB_Create(){
    CB_TypeDef cb;
    cb.head_ptr = cb.arr[0];
    cb.tail_ptr = cb.arr[MAX_CAPACITY];
    return cb;
}

void CB_Enqueue(){

}

void CB_Dequeue(){

}







#endif // circular_buffers_h

