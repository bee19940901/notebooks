//
// Created by Administrator on 2025/1/16.
//

#include "stdio.h"
#include "chapter6.h"

void chapter6(){

    // 两个整数相除
    // 结果就是整数
    int c = 21 / 10;
    printf("21 / 10 = %d\n", c);

    // 两个浮点数相除的结果是浮点数
    double d = 21.0 / 10.0;
    printf("21.0 / 10.0 = %f\n", d);

    // 浮点数除以整数
    // 结果是浮点数
    double d1 = 10.0;
    int i1 = 2;
    printf("10.0 / 2 = %f\n", d1 / i1);

    // 整数除以浮点数
    // 结果是浮点数
    int i2 = 10;
    double d2 = 2.99;
    printf("10 / 2.99 = %f\n", i2 / d2);

}