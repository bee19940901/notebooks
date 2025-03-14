//
// Created by Administrator on 2025/3/14.
//

#include "test.hpp"

Class10::Class10(int x, int y) {
    a = x;
    b = y;
}

void Class10::run(){
    cout << "a = " << a << "\t";
    cout << "b = " << b << endl;
    cout << "a < b = " << (a < b) << endl;
    cout << "a > b = " << (a > b) << endl;
    cout << "a >= b = " << (a >= b) << endl;
    cout << "a <= b = " << (a <= b) << endl;
    cout << "a != b = " << (a != b) << endl;
    cout << "a == b = " << (a == b) << endl;
    cout << "a || b = " << (a || b) << endl;
    cout << "a && b = " << (a && b) << endl;
}

Class1::Class1(int x, int y) {
    a = x;
    b = y;
}

void Class1::run() {
    cout << "a=" << a << "\t" << "b=" << b << "\n";
    cout << " a>b? " << ( a>b ? "yes" : "No") << "\n";
}

// while循环
void func1(){
    int a = 5;
    int i = 0;
    while (i < 5){
        cout << a << "*" << i << "=" << (a*i) << endl;
        i++;
        a++;
    }
}

// 在while循环中使用break
void func2(){
    int a = 5;
    int i = 0;
    while (true){
        if( i > 10){
            break;
        } else{
            cout << a << "*" << i << "=" << (a*i) << endl;
            i++;
            a++;
        }
    }
}

// do .. while 循环
// 至少会运行一次，再跳出循环
void func3(){
    int a = 5;
    int i = 10;
    do{
        cout << a << "*" << i << "=" << (a*i) << endl;
        i++;
    } while (i < 10);
}

// 常规for循环
void func4(){
    for (int i = 0; i < 10; i++){
        cout << "i=" << i << endl;
    }
}

// 使用break跳出循环
void func5(){
    for(int i = 0;;i++){
        if(i >= 10){
            break;
        }
        cout << "i=" << i << endl;
    }
}

// 加强的for循环
void func6(){
    int numbers[5] = {0, 2, 5, 9, 3};
    for(auto &n : numbers ){
        cout << "n=" << n << endl;
    }
}

// 同时获取index和Value
void func7(){
    int numbers[5] = {0, 2, 5, 9, 3};
    for(int i = 0; i < 5; i++){
        cout << "numbers[" << i << "]=" << numbers[i] << endl;
    }
}

// 遍历一个字符串并大写
void func8(){
    string str("beliver19940901@gmail.com");
    for(auto &c: str){
        c = (char )toupper(c);
    }
    cout << str << endl;
}

// 使用嵌套循环来打印一个乘法口诀表
void func9(){
    for(int i = 1; i < 10; i ++){
        for(int j = i; j < 10; j++){
            if (j < 9){
                cout << i << "*" << j << "=" << i*j << "\t";
            } else{
                cout << i << "*" << j << "=" << i*j;
            }
        }
        cout << endl;
    }
}

// 使用 continue 和 break 去打印100以内的所有偶数
void func10(){
    int i = 0;
    while (true){
        if (i == 100){
            cout << "Program Exit..." << endl;
            break;
        } else {
            if (i % 2 == 0){
                cout << i << endl;
            }
            i++;
            continue;
        }
    }
}