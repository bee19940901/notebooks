//
// Created by Administrator on 2025/1/21.
//

#include "test11.h"
#include "stdio.h"


void test11(){

    int nums[3] = {5, 8,10};

    int *p0 = &nums[0];
    int *p2 = &nums[2];

    printf("*p0 + 1 = %d\n", *(p0 +1));
    printf("*p2 - 1 = %d\n", *(p2 -1));
    printf("*num = %d\n", *nums);
    printf("*num + 1 = %d\n", *(nums + 1));
    printf("*num + 1 = %d\n", *(nums + 2));


}