//
// Created by Administrator on 2025/3/14.
//

#ifndef CPP_RUNOOB_RUNOOB_HPP
#define CPP_RUNOOB_RUNOOB_HPP

#include "iostream"
#include "string"
#include "cctype"
#include "iomanip"
#include "cmath"
#include "cstring"
#include "vector"
#include "ctime"
#include "cstdlib"
#include "locale"
#include "fstream"
#include <limits>

using namespace std;

// 一个简单的结构体


struct Employee{
    string name;
    unsigned short age{};
    double height{};
    double weight{};
};
struct Company{
    Employee worker;
    Employee boss;
};
Employee getE();
template <typename T>
void printVector(vector<T> &vec);

void func50();
void func49();
void func47();
void func48();
void printE(Employee *e);
void func46();
void func45();
void func44();
void func43();
void func42();
void func41();
void func40();
void func39();
void func38();
const int* myArray();
void func37();
int* myRandom();
void func36();
double getMean(const int *arr, ::size_t size);
void func35();
void getSeconds(unsigned long *ul_p);

class Class10 {
private:
    int a;
    int b;
public:
    Class10(int x, int y );
    void run();
};


// C++种的三元运算符
class Class1{
private:
    int a;
    int b;
public:
    Class1(int x, int y);
    void run();
};

void func1();
void func2();
void func3();
void func4();
void func5();
void func6();
void func7();
void func8();
void func9();
void func10();
void func11();
void func12();
void func13();
void func14();
void func15();
void func16();
void func17();
void func18();
void func19();
void func20();
void func21();
void func22();
void func23();
void func24();
void func25();
void func26();
void func27();
void func28();
void func29();
void func30();
void func31();
void func32();
void func33();
void func34();

#endif //CPP_RUNOOB_RUNOOB_HPP
