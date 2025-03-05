//
// Created by Administrator on 2025/3/4.
//

#include "chapter9.h"


void stars(void ){
    for(int i = 0; i < WIDTH; i++){
        printf("*");
    }
    printf("\n");
}

void list_9_1(void ){
    stars();
    printf("%s\n%d\n%.2lf\n%.2lf\n", NAME, AGE, HEIGHT, WEIGHT);
    stars();
}

void show_n_char(char cha, int num){
    for(int i = 0; i < num; i++){
        putchar(cha);
    }
}

void print_name(char name[]){
    int name_n = (int)strlen(name);
    int left_n = (WIDTH - name_n) / 2 ;
    int right_n = WIDTH - left_n - name_n;
    show_n_char(' ', left_n);
    printf("%s", name);
    show_n_char(' ', right_n);
    printf("\n");
}

void list_9_2(void ){
    stars();
    print_name(NAME1);
    print_name(NAME2);
    print_name(NAME3);
    stars();
}

void list_9_3(void ){
    int num1 = 0;
    int num2 = 0;
    while (1){
        printf("Enter a pair of integers (q to quit): \n");
        if (scanf("%d %d", &num1, &num2) != 2){
            printf("Bye.\n");
            break;
        }
        printf("The lesser of %d and %d is %d.\n", num1, num2, my_min(num1, num2));
    }
}

int my_min(int num1, int num2){
    return (num1 <= num2) ? num1 : num2;
}

void list_9_6(void ){
    up_and_down(1);
}

void up_and_down(int n){
    printf("Level %d, location %p.\n", n, &n);
    if (n < 10){
        up_and_down(n + 1);
    }
    printf("Level %d, location %p.\n", n, &n);
}

void list_9_8(void ){
    int num;
    while (1){
        printf("Enter an integer (q to quit): ");
        if(scanf("%d", &num) != 1){
            printf("Bye.\n");
            break;
        }
        printf("Binary equivalent: ");
        to_binary(num);
        putchar('\n');
    }
}

void to_binary(int n){
    int res = 0;
    res = n % 2;
    if (n >= 2){
        to_binary(n / 2);
    }
    putchar(res == 0? '0': '1');
}

double min(double x, double y){
    return x <= y ? x : y;
}

void test_9_1(void ){
    double num1 = 0;
    double num2 = 0;
    while (1){
        printf("Enter a pair of numbers (q to quit): ");
        if(scanf("%lf %lf",&num1, &num2 ) != 2){
            printf("Bye");
            break;
        }
        printf("The lesser of %.4lf and %.4lf is %.4lf.\n", num1, num2, min(num1, num2));
    }
}

void chline(char cha, int i, int j){
    for(int n = 0; n < i; n++){
        for(int m = 0; m < j; m ++ ){
            putchar(cha);
        }
        putchar('\n');
    }
}

void test_9_2(void ){
    chline('a', 10, 10);
}

double harmonic_mean(double x, double y){
    return 1.0 / ((1.0 / x + 1.0 / y) / 2 );
}

void test_9_4(void ){
    double num1 = 0;
    double num2 = 0;
    while (1){
        printf("Enter a pair of numbers (q to quit): ");
        if(scanf("%lf %lf",&num1, &num2 ) != 2){
            printf("Bye");
            break;
        }
        printf("The harmonic mean of %.4lf and %.4lf is %.4lf.\n", num1, num2, harmonic_mean(num1, num2));
    }
}
