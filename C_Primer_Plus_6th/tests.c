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

void chapter6_test1(void ){
    char letters[26] = {0};
    letters[0] = 'a';
    for(int i = 1; i < 26; i++){
        letters[i] = 'a' + i;
    }
    for(int i = 0; i < sizeof (letters) / sizeof (char ); i++){
        printf("%c\n", letters[i]);
    }
}

void chapter6_test2(void ){
    int i = 0;
    while (++i <= 5){
        for(int j = 0; j < i; j ++){
            printf("$");
        }
        printf("\n");
    }
}

void chapter6_test3(void ){
    char cha = 'F';
    int num = 'F' - 'A';
    for(int i = 0; i <= num; i ++){
        for(int j = 0; j <= i; j ++){
            printf("%c", cha - j);
        }
        printf("\n");
    }
}

void chapter6_test4(void ){
    char cha = 'A';
    int num = 0;
    for(int i = 0; i < 6; i++){
        for(int j = 0; j <= i; j++){
            printf("%c", cha + num);
            num ++;
        };
        printf("\n");
    }
}

void chapter6_test5(void ){
    char cap = 0;
    printf("Enter a capital like A B E K...: ");
    scanf("%c", &cap);
    int num = cap - 'A';
    for(int i =0; i <= num; i++){
        for(int l = 0; l < (num - i); l ++){
            printf(" ");
        }
        for( int j = 0; j < i; j++){
            printf("%c", 'A' + j);
        }
        for( int k = i; k>=0; k--){
            printf("%c", 'A' + k);
        }
        printf("\n");
    }
}

void chapter6_test6(void ){
    int max = 0;
    int min = 0;
    printf("Please enter the min limit number: ");
    if(scanf("%d", &min) != 1){
        printf("Integer Number only！");
        exit(1);
    }
    printf("Please enter the max limit number: ");
    if(scanf("%d", &max) != 1){
        printf("Integer Number only！");
        exit(1);
    }
    if (min > max){
        printf("MAX must bigger than MIX!");
        exit(1);
    }
    for(int i = min; i <= max; i ++){
        printf("%-8d%-8d%-8d\n", i, i * i, i*i*i);

    }
}

void chapter6_test7(void ){
    char str[1024] = {0};
    printf("Please enter a string: ");
    scanf("%s", str);
    for( int str_len = (int)strlen(str); str_len >= 0; str_len--){
        printf("%c", str[str_len]);
    }
}

void chapter6_test8(void ){
    double dou1 = 0;
    double dou2 = 0;
    while (1){
        printf("Please enter two floats:");
        if(scanf("%lf%lf", &dou1, &dou2) != 2){
            printf("Program exited...");
            break;
        } else{
            printf("%.2lf\n", (dou1 - dou2) / (dou1 * dou2));
        }
    }
}

double test9(double num1, double num2){
    return (num1 - num2) / (num1 * num2);
}

void chapter6_test9(void ){
    double dou1 = 0;
    double dou2 = 0;
    printf("Please enter two floats: ");
    if(scanf("%lf%lf", &dou1, &dou2) != 2){
        printf("Program exited...");
        exit(1);
    } else {
        printf("%lf", test9(dou1, dou2));
    }
}

void chapter6_test10(void ){
    int lower = 0;
    int upper = 0;
    int sum = 0;
    printf("Enter lower and upper integer limits: ");
    if(scanf("%d%d", &lower, &upper)!=2){
        printf("Program exit...\n");
        exit(1);
    }
    for(int i = lower; i <= upper; i++){
        sum += i*i;
    }
    printf("The sums of the squares from %d to %d is %d\n", lower, upper, sum);
    while (1){
        printf("Enter next set of limits: ");
        if(scanf("%d%d", &lower, &upper)!=2){
            printf("Program exit...\n");
            exit(1);
        }
        if (lower >= upper){
            printf("Done\n");
            break;
        }
        sum = 0;
        for(int i = lower; i <= upper; i++){
            sum += i*i;
        }
        printf("The sums of the squares from %d to %d is %d\n", lower, upper, sum);
    }
}

void chapter6_test11(void ){
    int integers[8] = {0};
    for(int i = 0; i < 8; i++){
        printf("NUMBER %d: ", i+1);
        if(scanf("%d", &integers[i]) != 1){
            printf("Program exit...\n");
            exit(1);
        }
    }
    for(int i = 7; i >= 0; i--){
        printf("%d",integers[i]);
    }
}

void chapter6_test12(void ){
    int number = 0;
    double sum1 = 0;
    double sum2 = 0;
    printf("Number 1: ");
    if(scanf("%d", &number) != 1){
        printf("Program Exit...");
        exit(1);
    }
    for(int i = 0; i < number; i++){
        sum1 += (1.0 / (double )(1 + i));
        if ( (i % 2) == 0){
            sum2 += (1.0 / (double )(1 + i));
        } else{
            sum2 -=  (1.0 / (double )(1 + i));
        }
    }
    printf("Sum 1 = %.4lf \n Sum 2 = %.4lf", sum1, sum2);
}

void chapter6_test13(void ){
    int numbers[8] = {0};
    int i = 0;
    int j = 0;
    for (; i < 8; i++){
        numbers[i] = (int )(pow(2, i));
    }
    do {
        printf("2 ^ %d = %d\n", j, numbers[j]);
        j ++;
    } while ( j < 8 );
}

void chapter6_test14(void ){
    double numbers[8] = {0};
    double cums[8] = {0};
    printf("Enter 8 numbers:\n");
    for(int i=0; i < 8 ; i++){
        scanf("%lf", &numbers[i]);
    }
    for(int i = 0; i < 8; i++){
        for(int j =0; j <= i; j++){
            cums[i] += numbers[j];
        }
    }
    for(int i = 0; i < 8; i++){
        printf("%8.2lf", numbers[i]);
    }
    printf("\n");
    for(int i = 0; i < 8; i++){
        printf("%8.2lf", cums[i]);
    }
    printf("\n");
}

void chapter6_test15(void ){
    char str[255] = {0};
    printf("Please enter string:\n");
    scanf("%s",str);
    unsigned long long str_len = strlen(str);
    for(int i = (int) (str_len-1); i >= 0; i--){
        printf("%c", str[i]);
    }
}

void chapter6_test16(void ){
    double daphne = 100;
    double daphne_profit = daphne * 0.1;
    double deirdre = 100;
    int i = 0;
    while (deirdre <= daphne){
        i++;
        daphne += daphne_profit;
        deirdre *= 1.05;

    }
    printf("After %d years.\n", i);
}

void chapter6_test17(void ){
    double num = 1000000;
    int i = 0;
    while ( num > 0  ){
        i++;
        num *= 1.08;
        num -= 100000;
    }
    printf("After %d years.\n",i );
}

void chapter6_test18(void ){
    const int MAX_FRIENDS = 150;
    int num = 5;
    int i = 0;
    while (num <= MAX_FRIENDS){
        i ++;
        num -= i;
        num *= 2;
        printf("Dr has %d friends at week %d.\n", num, i);
    }
}