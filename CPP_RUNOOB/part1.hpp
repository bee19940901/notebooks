//
// Created by Administrator on 2025/3/19.
//

#ifndef CPP_RUNOOB_PART1_HPP
#define CPP_RUNOOB_PART1_HPP

#include "iostream"

// 委托构造函数
void list_1_6();
//默认是浅拷贝构造
void list_1_5();
// 深拷贝构造
void list_1_4();
void list_1_3();
void list_1_2();
void list_1_1();


class Box4{
public:
    double length, width, height;
    Box4(double l, double w, double h);
    Box4();
};

class Box3{
public:
    double length, width, height;
    Box3(double l, double w, double h);
    Box3(const Box3 &other);
};

class Box1{
public:
    double length, width, height;
    //无参构造函数
    Box1();
};

class Box2{
public:
    double length, width, height;
    //无参构造函数
    Box2(double l, double w, double h);
};

//class Box{
//public:
//    double length{};
//    explicit Box(double l, double w, double h);
//    double getLength() const;
//    double getWidth() const;
//    double getHeight() const;
//protected:
//    double width{};
//private:
//    double height{};
//};

//class Box1: public Box{
//public:
//    using Box::Box;
//
//};

//class Box2: protected Box{
//public:
//    using Box::Box;
//};
//
//class Box3: private Box{
//public:
//    using Box::Box;
//};


#endif //CPP_RUNOOB_PART1_HPP
