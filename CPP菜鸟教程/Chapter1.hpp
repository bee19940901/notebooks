//
// Created by Administrator on 2025/3/21.
//

#ifndef CPP_CHAPTER1_HPP
#define CPP_CHAPTER1_HPP
#include <iostream>

// 方法的链式调用
class Person{
private:
    std::string name;
    int age;
public:
    Person();
    ~Person() = default;
    Person& setName(const std::string &n);
    Person& setAge(int a);
    void run() const;
};

void chapter1();


#endif //CPP_CHAPTER1_HPP
