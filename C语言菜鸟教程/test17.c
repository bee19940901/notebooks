//
// Created by Administrator on 2025/1/23.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tests.h"

#define LINE_MAX (1024 * 1024)

void test17(){
    // 打开文件
    char file[] = "../test_150bp.fastq";
    FILE *handle = fopen(file, "r");
    // 打开失败
    if (handle == NULL){
        perror("Can not open file");
        exit(1);
    }
    // 动态分布内存
    char *line = malloc(LINE_MAX * sizeof (char));
    if (line == NULL){
        perror("Unable to allocate memory");
        fclose(handle);
        exit(1);
    }

    // 初始化缓存空间
    int buffer = LINE_MAX;
    // 逐行读取文件
    while (fgets(line, buffer, handle)){
        // 打印当前缓冲区大小
        // 如果缓冲区装满而且 最后一个字符不是\n, 则说明这一行没有读完，需要扩容
        if ((strlen(line) == buffer -1) && (line[buffer -2] != '\0')){
            buffer *= 2;
            line = realloc(line, buffer);
            if (line == NULL){
                perror("Unable t reallocate memory");
                fclose(handle);
                exit(1);
            }
            fseek(handle, (long)-strlen(line), SEEK_CUR);
        } else{
            printf("Buffer: %d\n", buffer);
            printf("Line: %s", line);
        }

    }
    free(line);
    fclose(handle);
}