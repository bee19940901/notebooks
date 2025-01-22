//
// Created by Administrator on 2025/1/21.
//

#include "stdio.h"
#include "test10.h"

void test10(){

    int n = 0;

    while (n < 20){
        printf("%d\n", n);
        n++;
    }

    // do ... while
    // 不满足条件也要运行一次
    int n1 = 10;
    do{
        n1 += 1;
        printf("%d\n", n1);
    } while( n1 < 10);

    // for 循环
    int ns[3] = {1, 2,3};
    for(int i = 0; i < 3; i++){
        printf("%d\n", ns[i]);
    }
}