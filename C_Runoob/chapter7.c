//
// Created by Administrator on 2025/1/17.
//

#include "stdio.h"
#include "chapter7.h"

void chapter7(){

    // ++a 和 a++的区别

    // ++a 是先再加在赋值
    int a = 0;
    int b = ++a;
    printf("++a a: %d, b: %d\n",a, b);

    // a++ 是先赋值再加
    int a1 = 0;
    int b1 = a1++;
    printf("a1++ a1: %d, b1: %d\n",a1, b1);

    // a--
    int a2 = 10;
    int b2 = a2--;
    printf("a2-- a2: %d, b2: %d\n",a2, b2);

    // --a
    int a3 = 10;
    int b3 = --a3;
    printf("--a3 a3: %d, b3: %d\n",a3, b3);


}