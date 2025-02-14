//
// Created by Administrator on 2025/1/23.
//

#include <stdio.h>
#include "utils.h"

void greet(const char *name){
    printf("Hello, I'm %s\n", name);
}

void eat(void ){
    printf("I'm eating!\n");
}

void run(void ){
    printf("I'm running!\n");
}

People get_people(void ){
    People people = {greet, eat, run};
    return people;
}