//
// Created by Administrator on 2025/1/24.
//

/*
 * 有 1、2、3、4 四个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
 * */

#include <stdio.h>
#include <stdlib.h>

#include "tests.h"

void test1(){
    unsigned int count = 0;
    unsigned int capacity = 1024;
    int *numbers = (int *)malloc(capacity * sizeof (int ));
    if (numbers == NULL){
        perror("Unable to allocate memory");
        exit(1);
    }
    for (int a = 1; a < 5; a ++){
        for (int b=1; b<5; b++){
            for (int c=1; c<5; c++){
                if ((a != b) && (b != c) && (a != c)){
                    if (count == capacity){
                        capacity *= 2;
                        int *tmp = (int *)realloc(numbers, sizeof (int) * capacity);
                        if (tmp == NULL){
                            perror("Unable to reallocate memory");
                            exit(1);
                        }
                        numbers = tmp;
                    }
                    numbers[count] = a * 100 + b * 10 + c;
                    count ++;
                }
            }
        }
    }
    printf("COUNT: %d\n", count);
    for (int i = 0; i < count; i++){
        printf("value: %d\n", numbers[i]);
    }
    free(numbers);
}