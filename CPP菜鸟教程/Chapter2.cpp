#include "Chapter2.hpp"

#include <utility>

// 构造函数实现
Chapter2::Chapter2(std::string n, int a, double s) : name(std::move(n)), age(a), score(s) {}



// 设置 name
Chapter2 &Chapter2::setName(const std::string &n) {
    name = n;
    return *this;
}

// 设置 age
Chapter2 &Chapter2::setAge(int a) {
    age = a;
    return *this;
}

// 设置 score
Chapter2 &Chapter2::setScore(double s) {
    score = s;
    return *this;
}

// 运行方法
Chapter2& Chapter2::run(){
    std::cout << "My name is " << name << ", I am " << age
              << " years old, my score is " << score << ", I am running.\n";
    return *this;
}

Chapter2 &Chapter2::operator=(const Chapter2& c) {
    name = c.name;
    age = c.age;
    score = c.score;
    return *this;
}


void chapter2(){
    Chapter2 lily("Lily", 28, 95.0);

    // 链式调用通过 = 操作符
    lily.setName("Lily") =
            lily.setAge(30) =
                    lily.setScore(100.0) =
                            lily.run();
}