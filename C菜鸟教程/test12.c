//
// Created by Administrator on 2025/1/22.
//

#include "test12.h"
#include "stdio.h"
#include "stdlib.h"

// 指针函数作为回调函数
static void populate_array(int *arr, int arr_len, int (*func)(void))
{
    for(int i = 0; i < arr_len; i++){
        arr[i] = func();
    }
}

static int get_random_int(){
    return rand();
}

// 传入函数指针作为会跳函数
void test12(){
    int arr[5] = {};
    int arr_len = 5;
    populate_array(arr, arr_len, get_random_int);
    for(int i = 0; i < 5; i++){
        printf("ARRAY[%d] = %d\n", i, arr[i]);
    }
}