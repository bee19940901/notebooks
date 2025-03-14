//
// Created by Administrator on 2025/3/14.
//

#include "Instance9.hpp"

Instance9::Instance9(int x, int y) : a(x), b(y) {};

void Instance9::operator()() {
    cout << "a+b=" << a + b << endl;
    cout << "a-b=" << a - b << endl;
    cout << "a*b=" << a * b << endl;
    cout << "a/b=" << a / b << endl;
    cout << "a%b=" << a % b << endl;
    cout << "a++=" << a++ << endl;
    cout << "++a=" << ++a << endl;
}
