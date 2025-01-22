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

    int my_int = 10;
    int *my_int_p = &my_int;
    printf("The value of int: %d\n", *my_int_p);
    printf("The address of int %p\n", my_int_p);
    printf("my_int_p + 1 = %p\n", my_int_p + 1);
    printf("my_int_p + 1 = %d\n", *(my_int_p + 1));

    // 空指针
    int * null_p = NULL;
    if(null_p){
        printf("This is not a null pointer!\n");
    } else{
        printf("This is a null pointer!\n");\
        printf("Address of NULL pointer = %p\n \n", null_p);
//        printf("Value of NULL pointer  = %d\n", *null_p);
// 报错 不能获取空指针的值
    }
    // 指针的递增
    // 字符指针
    char s[] = "abcde";
    char *s_p = s;
    int s_len = sizeof s / sizeof s[0];
    for(int i =0; i < s_len; i++){
        printf("Address of s[%d] = %p\n",i, s_p);
        printf("Value of s[%d] = %c\n",i, *s_p);
        s_p++;
    }

    // 整数指针
    int ints[] = {2, 4, 5, 6, 9};
    int *ints_p = ints;
    int ints_len = sizeof ints / sizeof ints[0];
    // 指针每次移动的距离是4字节
    for(int i =0; i < ints_len; i++){
        printf("Address of ints[%d] = %p\n",i, ints_p);
        printf("Value of s=ints[%d] = %d\n",i, *ints_p);
        ints_p++;
    }

    // 结构体指针
    struct Student{
        char name[32];
        int age;
        double height;
        char level;
    };
    struct Student students[] = {
            {"Alison", 31, 181.5, 'A'},
            {"Bee", 30, 173.0, 'A'},
            {"Cate", 58, 183.7, 'C'},
            {"David", 41, 161.5, 'B'}
    };
    struct Student *students_p = students;
    // 指针每次移动 32 + 4 + 8 + 1 + 对齐 = 48 个字节
    for(int i = 0; i < sizeof students / sizeof students[0]; i++){
        printf("%s\n", students_p->name);
        printf("%d\n", students_p->age);
        printf("%f\n", students_p->height);
        printf("%c\n\n", students_p->level);
        students_p++;

        // 数组名是一个常量指针 不能自增和自减
        // students++;
    }

}