//
// Created by Administrator on 2025/1/23.
//

#pragma once

typedef void (*Greet)(const char *name);

typedef void (*Run)(void );

typedef void (*Eat)(void );

typedef struct {
    Greet greet;
    Eat eat;
    Run run;
} People;

void greet(const char *name);

void run(void );

void eat(void );

People get_people(void );







