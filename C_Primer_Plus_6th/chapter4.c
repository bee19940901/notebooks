//
// Created by Administrator on 2025/2/13.
//

#include "chapter4.h"

void test1(void ){
    char firstName[64] = {};
    char lastName[64] = {};
    printf("Please input your name:\n");
    scanf("%s %s", firstName, lastName);
    printf("Your name is %s,%s.", firstName, lastName);
}

void test2(void ){
    char name[128] = {};
    printf("Please input your name:\n");
    scanf("%s", name);
    printf("\"%20s\"\n", name);
    printf("\"%-20s\"\n", name);
    int width = (int)strlen(name) + 3;
    printf("\"%*s\"\n", width, name);
}

void test3(void ){
    double num = 0;
    printf("Please input you number:\n");
    scanf("%lf", &num);
    printf("The input is %.1lf or %.1le", num, num);

}

void test4(void ){
    char name[64] = "";
    double height = 0;
    scanf("%lf %s", &height, name);
    printf("\"%s, you are %.4lf meters tall\"\n", name, height / 100.0);
}

void test5(void ){
    float s = 0;
    float v = 0;
    printf("Please input speed and volume:\n");
    scanf("%f %f", &s, &v);
    float time = (v * 8)  / s;
    printf("At %.2f megabits per second, a file of %.2f megabytes download in %.2f seconds.\n", s, v, time);
}

void test6(void ){
    char firstName[64] = "";
    char lastName[64] = "";
    printf("Please input your first name:\n");
    scanf("%s", firstName);
    printf("Please input your last name:\n");
    scanf("%s", lastName);
    unsigned long long firstLen = strlen(firstName);
    unsigned long long lastLen = strlen(lastName);
    printf("%s %s\n%*lld %*lld\n", firstName, lastName, (int)firstLen, firstLen, (int)lastLen, lastLen);
    printf("%s %s\n%-*lld %-*lld\n", firstName, lastName, (int)firstLen, firstLen, (int)lastLen, lastLen);
}

void test7(){
    printf("FLT_DIG: %d\n", FLT_DIG);
    printf("DBL_DIG: %d\n", DBL_DIG);
    float num = 1.0f / 3.0f;
    printf("FIRST: %.6f\n", num);
    printf("SECOND: %.12f\n", num);
    printf("THIRD: %.16f\n", num);

}

void test8(){
    double miles = 0.0;
    double gas = 0.0;
    printf("Please input your miles:\n");
    scanf("%lf", &miles);
    printf("Please input your gas:\n");
    scanf("%lf", &gas);
    printf("US: %.1lf\n", miles / gas);
    printf("EU: %.1f", (miles * MILE) / (gas * GALLON));

}