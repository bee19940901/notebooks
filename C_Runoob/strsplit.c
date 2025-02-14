//
// Created by Bee on 2025/1/22.
//


#include "strsplit.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// split函数：将字符串根据指定分隔符分割成多个子字符串
char** strsplit(const char* str, const char* delimiter, int* count) {
    // 计算最大可能的分割数（字符串长度除以1的字符长度）
    int capacity = 10;
    char** result = (char**)malloc(capacity * sizeof(char*));  // 动态分配结果数组
    int index = 0;  // 子字符串的计数器

    // 拷贝原始字符串，以免改变原始字符串
    char* str_copy = strdup(str);
    char* token = strtok(str_copy, delimiter);  // 第一个token

    while (token != NULL) {
        if (index >= capacity) {
            capacity *= 2;  // 如果数组满了，扩大容量
            result = (char**)realloc(result, capacity * sizeof(char*));
        }
        result[index] = strdup(token);  // 保存当前token
        index++;
        token = strtok(NULL, delimiter);  // 获取下一个token
    }

    free(str_copy);  // 释放临时的字符串副本
    *count = index;  // 返回分割的数量
    return result;
}

// 释放split函数分配的内存
void free_split_result(char** result, int count) {
    for (int i = 0; i < count; i++) {
        free(result[i]);  // 释放每个子字符串
    }
    free(result);  // 释放结果数组
}
