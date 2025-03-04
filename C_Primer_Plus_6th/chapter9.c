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