//
// Created by Bee on 2025/1/22.
//

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "test13.h"

void test13(){
    // 初始化一个字符串
    char str[16] = "hello, world!";
    // 打印一个字符串
    printf("%s\n", str);
    // 获取一个字符串的长度
    printf("%lu\n", sizeof str / sizeof str[0]);

    // 遍历一个字符串
    for(int i = 0; i < sizeof str / sizeof str[0]; i++){
        if(str[i]){
            printf("%c\n", str[i]);
        }
    }

    // 使用字符指针遍历一个字符串
    char *str_p = str;
    for(int i =0; i < sizeof str / sizeof str[0]; i++){
        printf("Address: %p\n", str_p);
        printf("Value: %c\n", *str_p);
        str_p++;
    }

    // 复制一个字符串
    char str1[1024] = {};
    strcpy(str1, str);
    printf("%s\n", str1);

    // 连接两个字符串
    char str2[1024] = "Hello, ";
    char str3[1024] = "world!";
    strcat(str2, str3);
    printf("%s\n", str2);

    // 获取字符串的长度
    printf("%lu\n", strlen(str2));
    // 注意两种计算字符串长度的差异
    printf("%lu\n", sizeof str2 / sizeof str2[0]);
    // strlen计算的是有效字符的长度



}
