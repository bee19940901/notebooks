#ifndef CHAPTER2_HPP
#define CHAPTER2_HPP

#include <iostream>
#include <string>

class Chapter2 {
private:
    std::string name;
    int age;
    double score;

public:
    // 构造函数
    Chapter2(std::string n, int a, double s);

    // 操作符重载
    Chapter2 &operator=(const Chapter2& c);

    // 设置方法（返回 *this 以支持链式调用）
    Chapter2& setName(const std::string &n);
    Chapter2& setAge(int a);
    Chapter2& setScore(double s);
    Chapter2& run();
};
void chapter2();

#endif // CHAPTER2_HPP
