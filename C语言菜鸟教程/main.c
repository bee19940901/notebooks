//
// Created by Administrator on 2025/1/16.
//

#include "stdio.h"
#include "chapter4.h"
#include "string.h"
#include "chapter5.h"
#include "chapter6.h"
#include "chapter7.h"
#include "chapter8.h"
#include "test9.h"
#include "test10.h"
#include "test11.h"

// 主函数
int main(){

    char left_string[21] = {};
    char right_string[21] = {};
    memset(left_string, '>', 20);
    memset(right_string, '<', 20);
    left_string[20] = '\0';
    right_string[20] = '\0';

    printf("\n%s CHAPTER4 %s\n", left_string, right_string);
    chapter4();

    printf("\n%s CHAPTER5 %s\n", left_string, right_string);
    for(int i = 0; i < 5; i++){
        chapter5();
    }

    printf("\n%s CHAPTER6 %s\n", left_string, right_string);
    chapter6();

    printf("\n%s CHAPTER7 %s\n", left_string, right_string);
    chapter7();

    printf("\n%s CHAPTER8 %s\n", left_string, right_string);
    chapter8();

    printf("\n%s TEST9 %s\n", left_string, right_string);
    test9();

    printf("\n%s TEST10 %s\n", left_string, right_string);
    test10();

    printf("\n%s TEST11 %s\n", left_string, right_string);
    test11();

    return 0;
}