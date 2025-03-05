//
// Created by Administrator on 2025/3/4.
//

#ifndef C_CHAPTER9_H
#define C_CHAPTER9_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define NAME "Bee"
#define AGE 30
#define HEIGHT 173.0
#define WEIGHT 74.0
#define WIDTH 50
#define NAME1 "Alison Tyler"
#define NAME2 "Bee Bee"
#define NAME3 "Chanel Preston"

void stars(void );
void list_9_1(void );


// 居中显示三个名字
void list_9_2(void );
void show_n_char(char cha, int num);
// 打印名字
void print_name(char name[]);

//程序清单 9.3
void list_9_3(void );

// 返回两个整数之间的更小值
int my_min(int num1, int num2);

// 程序清单 9.6
void list_9_6(void );
void up_and_down(int n);

// 程序清单9，8
void list_9_8(void );
void to_binary(int n);

void test_9_1(void );
double min(double x, double y);

void test_9_2(void );
void chline(char cha, int i, int j);

void test_9_4(void );
double harmonic_mean(double x, double y);






#endif //C_CHAPTER9_H
