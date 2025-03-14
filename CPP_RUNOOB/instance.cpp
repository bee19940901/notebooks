//
// Created by Administrator on 2025/3/14.
//

#include "instance.hpp"

// 全局变量
int d;
int e;
int f;

int g = 10;

void instance1(){
    int a = 0;
    int b = 0;
    int c = 0;
    a = 10;
    b = 20;
    c = a + b;
    cout << c << endl;
}

void instance2(){
    d = 10;
    e = 20;
    f = e + d;
    cout << f << endl;
}

void instance3(){

    // 局部变量会覆盖全局变量
    int g = 42;

    cout << g << endl;
}

//块作用域变量不影响局部变量
void instance4(){
    int h = 10;
    {
        int h = 100;
        cout << "块作用域变量h=" << h << endl;
    }
    cout << "局部变量h=" << h << endl;
}

class MyClass{
public:
    static int class_var;
};

// 类外定义并初始化静态成员变量（必须）
int MyClass::class_var = 42;

// 如何使用类作用域的变量
void instance5(){
    cout << "Class Var = " <<  MyClass::class_var << endl;
}

// 显示一些转义序列字符
void instance6(){
    cout << "Hello,\tworld!\n";
}

// 定义一些常量
void instance7(){
    const int LENGTH = 5;
    const int WIDTH = 10;
    int area = LENGTH * WIDTH;
    cout << "AREA = " << area << endl;
}