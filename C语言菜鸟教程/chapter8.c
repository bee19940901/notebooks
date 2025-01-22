//
// Created by Administrator on 2025/1/17.
//

#include "chapter8.h"
#include "stdio.h"
#include "stdbool.h"

void chapter8(){

    // 位运算 与 或 非 异或 左移 右移

    // &
    // 18: 00010010
    // 11: 00001011
    //     00000010 = 2
    int a = 0b00010010;
    int b = 0b00001011;
    int c = a&b;
    printf("18 & 11 = %d\n", c);

    // '|'
    // 18: 00010010
    // 11: 00001011
    //     00011011 = 27
    int c1 = a|b;
    printf("18 | 11 = %d\n", c1);

    // 异或
    // 判断同位置上对应的两个值是否相等，相等为0，不等为1
    // 18: 00010010
    // 11: 00001011
    //     00011001 = 25
    int c2 = a^b;
    printf("18 ^ 11 = %d\n", c2);

    // 取反
    // A: 01000001
    // ~  10111110 取反后为负数
    // 计算负数 = 取反加1 加上负号
    // 所以给正数取反的 就是 +1 加上负号
    // 所以65 取反是 -66
    int A = 'A';
    printf("A: %d\n", A);
    printf("~A = %d\n", ~A);

    // 左移
    // short 9: 00000000 00001001
    // << 2   : 00000000 00100100 = 36
    // 每左移一位是乘以2
    printf("9<<2 = %d\n", 9<<2);

    // 右移 一位是除以2 舍去小数位
    printf("9>>2 = %d\n", 9>>2);

    // sizeof 运算符
    char ca = 'a';
    int i = 10;
    unsigned int u = 10u;
    long l = 10l;
    unsigned long lu = 10lu;
    long long ll = 10ll;
    unsigned long long llu = 10llu;
    double d = 10.0;
    float f = 10.0f;
    printf("sizeof char = %llu\n", sizeof ca);
    printf("sizeof int = %llu\n", sizeof i);
    printf("sizeof unsigned int = %llu\n", sizeof u);
    printf("sizeof long = %llu\n", sizeof l);
    printf("sizeof unsigned long = %llu\n", sizeof lu);
    printf("sizeof long long = %llu\n", sizeof ll);
    printf("sizeof unsigned long long = %llu\n", sizeof llu);
    printf("sizeof double = %llu\n", sizeof d);
    printf("sizeof float = %llu\n", sizeof f);

    // 三元运算符
    printf("true?10:20 = %d\n", true? 10 : 20);
    printf("(13 < 11 ) ? 10 : 20 = %d\n", (13 < 11)? 10 : 20);

}