#include <stdio.h>


// 使用结构体来模拟多态

// 定义一个函数类型
typedef void (*Hello)(const char*);

//  定义一个函数类型
typedef void (*Hi)(const char*, int age);

typedef struct {
    Hello greet;
}Class1;

typedef struct {
    Hi greet;
} Class2;

void hello(const char* name){
    printf("Hello, %s.\n", name);
}

void hi(const char* name, int age){
    printf("Hi, %s.\nI'm %d years old.\n", name, age);
}

typedef struct {
    double python;
    double rscript;
    double linux;
} Scores;

// 定义一个结构体, 里面的每一个字段都是指针
typedef struct {
    int age;
    char *name;
    Scores *scores;
} Student;

void test15() {
    // 成绩
    Scores scores = {95.0, 100.0, 73.5};

    // 初始化结构体
    Student student = {30, "Bee", &scores};

    // 输出学生信息
    printf("Name of student is %s\n", student.name);
    printf("Age of student is %d\n", student.age);
    printf("Score of Python id %.1f\n", student.scores->python);
    printf("Score of Rscript is %.1f\n", student.scores->rscript);
    printf("Score of Linux is %.1f\n", student.scores->linux);

    // 模拟多态
    Class1 class1 = {hello};
    Class2 class2 = {hi};
    class1.greet("Bee");
    class2.greet("Bee", 30);
}
