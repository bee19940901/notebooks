//
// Created by Administrator on 2025/2/14.
//

#include "tests.h"

void chapter5_test5(void ){
    int total = 0;
    int ini = 0;
    int day = 0;

    printf("Enter the number of days: ");
    scanf("%d", &day);
    while (++ini <= day){
        total += ini;
    }
    printf("TOTAL: %d\n", total);
}

void chapter5_test6(void ){
    int total = 0;
    int ini = 0;
    int day = 0;

    printf("Enter the number of days: ");
    scanf("%d", &day);
    while (++ini <= day){
        total += (ini * ini);
    }
    printf("TOTAL: %d\n", total);
}

void cube(double dbl){
    printf("%.2lf", dbl * dbl * dbl);
}

void chapter5_test7(void ){
    double num = 0;
    printf("Enter a double type number: ");
    scanf("%lf", &num);
    cube(num);
}

void chapter5_test8(void ){
    int num1 = 0;
    int num2 = 0;
    int module = 0;
    printf("This program computes moduli.\n");
    printf("Enter an integer to server as the second operand (> 0): ");
    scanf("%d", &num2);
    while (1){
        printf("Now enter the first operand (> 0 ): ");
        scanf("%d", &num1);
        if(num1 <= 0){
            printf("Bye");
            break;
        }
        printf("%d %% %d is %d\n", num1, num2, (num1 % num2));
    }
}

void chapter5_test9(void ){
    double c = 0;
    double f = 0;
    double k = 0;
    printf("Program lunched.\n");
    while (1){
        printf("Enter: ");
        int res = scanf("%lf", &f);
        if (res != 1){
            printf("Bye");
            break;
        } else{
            c = 5.0 / 9.0 * (f - 32.0);
            k = c + 273.16;
            printf("%.2lF  %.2lfC %.2lfK\n", f, c, k );
        }
    }
}
