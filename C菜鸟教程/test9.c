//
// Created by Administrator on 2025/1/17.
//

#include "test9.h"
#include "stdio.h"

enum Day {
    SUNDAY = 1,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

void test9() {
    // if ... else if ... else
    int arr[] = {78, -67, 0, -144, 44};
    int len = sizeof(arr) / sizeof(int);
    for(int i = 0; i < len; i++) {
        if (arr[i] > 0) {
            printf("Positive\n");
        } else if (arr[i] < 0) {
            printf("Negative\n");
        } else {
            printf("Zero\n");
        }
    }
    // switch 经常与 枚举搭配使用
    enum Day day = MONDAY;
    printf("%d\n", day);
    switch (day) {
        case SUNDAY:
            printf("HELLO, SUNDAY!");
            break;
        case MONDAY:
            printf("Monday\n");
            break;
        case TUESDAY:
            printf("TUESDAY\n");
            break;
        case WEDNESDAY:
            printf("WEDNESDAY\n");
            break;
        case THURSDAY:
            printf("THURSDAY\n");
            break;
        case FRIDAY:
            printf("FRIDAY\n");
            break;
        case SATURDAY:
            printf("SATURDAY\n");
            break;
        default:
            printf("ERROR");
    }
}
