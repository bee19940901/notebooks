//
// Created by Administrator on 2025/1/16.
//

#include "chapter5.h"
#include "stdio.h"

// 静态局部变量在整个程序运行期间都会保存状态
void chapter5(){
    static int count = 0;
    count++;
    printf("COUNT: %d\n", count);
}