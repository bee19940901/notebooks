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
#include "test12.h"
#include "test13.h"
#include "strsplit.h"
#include "cut_fastq.h"

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

    printf("\n%s TEST12 %s\n", left_string, right_string);
    test12();

    printf("\n%s TEST13 %s\n", left_string, right_string);
    test13();

    const char* str = "C\tlanguage\tsplit\tfunction\texample";
    int count = 0;

    // 调用split函数
    char** result = strsplit(str, "\t", &count);

    // 打印分割结果
    for (int i = 0; i < count; i++) {
        printf("result[%d]: %s\n", i, result[i]);
    }

    // 释放内存
    free_split_result(result, count);

    printf("\n%s TEST14 %s\n", left_string, right_string);
    cut_fastq("../test_150bp.fastq", "../outputs/75bp/test_75bp.fastq", 75);

    return 0;
}