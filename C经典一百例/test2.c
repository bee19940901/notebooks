//
// Created by Administrator on 2025/1/24.
//

#include <stdio.h>
#include <stdlib.h>

#include "tests.h"


/*
题目：企业发放的奖金根据利润提成。
利润(I)低于或等于10万元时，奖金可提10%； level0
利润高于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可提成7.5%； level1
20万到40万之间时，高于20万元的部分，可提成5%；
40万到60万之间时高于40万元的部分，可提成3%；
60万到100万之间时，高于60万元的部分，可提成1.5%；
高于100万元时，超过100万元的部分按1%提成。
从键盘输入当月利润I，求应发放奖金总数？
*/
void test2() {
    // 低于10万
    double level0 = 0.0;
    // 100000 - 200000
    double level1 = level0 + 100000.0 * 0.1;
    // 200000 - 400000
    double level2 = level1 + 100000.0 * 0.075;
    // 400000 - 600000
    double level3 = level2 + 200000.0 * 0.05;
    // 600000 - 1000000
    double level4 = level3 + 200000.0 * 0.03;
    // > 10000000
    double level5 = level4 + 400000.0 * 0.015;

    // 获取利润数
    double profit = 0.0;
    printf("Input your profit:\n");
    scanf("%lf",&profit);

    if (profit <= 100000.0){
        printf("Your bonus: %f\n", profit * 0.1 + level0);
    } else if ( profit <= 200000 ){
        printf("Your bonus: %f\n", (profit-100000)*0.075 + level1);
    } else if ( profit <= 400000 ){
        printf("Your bonus: %f\n", (profit-200000)*0.05 + level2);
    } else if(profit <= 600000){
        printf("Your bonus: %f\n", level3 + (profit-400000)*0.03);
    } else if(profit <= 1000000){
        printf("Your bonus: %f\n", level4 + (profit-600000)*0.015);
    } else{
        printf("Your bonus: %f\n", level5 + (profit-1000000)*0.01);
    }
}