//
// Created by Administrator on 2025/2/13.
//

#include "chapter5.h"

void chapter5_test1(void ){
    int minutes = 0;
    while (1){
        printf("Please input time of minus:\n");
        scanf("%d", &minutes);
        if (minutes <= 0){
            break;
        } else{
            int hours = minutes / M_PER_H;
            int rest = minutes % M_PER_H;
            printf("TIME: %d:%d\n", hours, rest);
        }
    }
}

void chapter5_test2(void ){
    int num = 0;
    printf("Please input a number:\n");
    scanf("%d", &num);
    for(int i = 0; i <=10; i++){
        printf("%d\n", num + i);
    }
}

void chapter5_test3(){
    int day = 0;
    int week = 0;
    int rest = 0;
    while (1){
        printf("Please input number of days: ");
        scanf("%d", &day);
        if (day <= 0){
            printf("Program exit.");
            break;
        } else{
            week = day / D_PER_W;
            rest = day % D_PER_W;
            if(rest == 1){
                printf("%d days are %d weeks, 1 day.\n", day, week);
            } else {
                printf("%d days are %d weeks, %d days.\n", day, week, rest);
            }
        }
    }
}

void chapter5_test4(){
    double cm = 0;
    double inch = 0;
    int foot = 0;
    double rest = 0;
    while (1){
        printf("Enter a height in centimeters:");
        scanf("%lf", &cm);
        if (cm <= 0){
            printf("Bye");
            break;
        } else{
            inch = cm / CM_PER_INCH;
            foot = (int) (inch / INCH_PER_FOOT);
            rest = inch - INCH_PER_FOOT * foot;
            printf("%.1lf cm = %d feet, %.1lf inches\n", cm, foot, rest);
        }
    }
}

