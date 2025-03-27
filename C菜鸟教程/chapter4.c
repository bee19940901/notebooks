//
// Created by Administrator on 2025/1/16.
//

#include "chapter4.h"
#include "stdio.h"

void chapter4(){
    // 整数型变量
    int my_int = 0;
    my_int = -42;
    printf("INT: %d\n", my_int);

    // 无符号整数型变量
    unsigned int my_uint = 0;
    my_uint = 42u;
    printf("UNSIGNED INT: %u\n", my_uint);

    // 长整数型变量
    long my_long = 0;
    my_long = 1887389173l;
    printf("LONG: %ld\n", my_long);

    // 无符号长整数型
    unsigned long my_unsigned_long = 0;
    my_unsigned_long = 1314520000lu;
    printf("UNSIGNED LONG: %lu\n", my_unsigned_long);

    /* 双精度小数型浮点数 */
    double my_double = 0.0;
    my_double = 3.1415;
    printf("DOUBLE: %f\n", my_double);

    // 双精度指数型浮点数
    double my_double1 = 3.16789e-5;
    printf("DOUBLE: %f\n", my_double1);

    // 单精度浮点数
    float my_float = 3.111e-5f;
    printf("FLOAT: %f\n", my_float);

    // 字符
    char my_char = 'a';
    printf("CHAR: %c\n", my_char);

    // 将字符转换为整数
    int my_int1 = (int )'a';
    printf("CHAR INT: %d\n", my_int1);

    // 将整数转换为字符
    char my_char1 = (char )98;
    printf("CHAR %c\n", my_char1);

    // 使用整数声明赋值一个字符变量
    char my_char2 = 97;
    printf("CHAR %c\n", my_char2);
    printf("CHAR %c\n", 98);
    printf("CHAR %c\n", 99);

    // 字符串常量
    char my_string[] = "abc";
    printf("STRING %s\n", my_string);

    // 使用整数数组的形式声明赋值一个字符串变量
    // 字符串常量在内存中以 null 终止符 \0 结尾。
    unsigned char my_string1[] = {97, 98, 99, 0};
    printf("STRING %s\n", my_string1);

    // 声明一个常量
    const int MAX_VALUE = 100;
    int my_int2 = 10 * MAX_VALUE;
    printf("INT %d\n", my_int2);


}