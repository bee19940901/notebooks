//
// Created by Administrator on 2025/3/14.
//

#ifndef CPP_RUNOOB_INSTANCE9_HPP
#define CPP_RUNOOB_INSTANCE9_HPP

#include <iostream>
using namespace std;

class Instance9 {
private:
    int a;
    int b;

public:
    Instance9(int x, int y);  // 构造函数声明[2,3](@ref)
    void operator()();       // 重载()操作符声明[6,7](@ref)
};

#endif //CPP_RUNOOB_INSTANCE9_HPP
