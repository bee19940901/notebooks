//
// Created by Administrator on 2025/2/28.
//

#include "chapter8.h"

void list_8_2(void ) {
    int ch;
    while ((ch = getchar()) != EOF) {
        putchar(ch);
    }
}

// 读取并打印文件内容
void list_8_3(void ){
    int ch;
    FILE * file_p;
    char file_name[128];
    printf("Enter the name of the file: ");
    scanf("%s", file_name);
    file_p = fopen(file_name, "r");
    if((file_p = fopen(file_name, "r")) == NULL){
        printf("Failed to open file: %s, bye!\n", file_name);
        return;
    }
    while ((ch = getc(file_p)) != EOF){
        putchar(ch);
    }
}