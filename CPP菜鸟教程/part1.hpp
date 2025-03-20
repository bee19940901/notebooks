//
// Created by Administrator on 2025/3/19.
//

#ifndef CPP_RUNOOB_PART1_HPP
#define CPP_RUNOOB_PART1_HPP

#include "iostream"
#include <memory>

// 多态
void test_1_1();

class Animal{
protected:
    std::string name;
public:
    explicit Animal(const std::string &n);
    virtual ~Animal();
    virtual void hello();
};

class Dog: public Animal{
public:
    explicit Dog(const std::string &n);
    ~Dog() override;
    void hello() override;
};

class Cat: public Animal{
public:
    explicit Cat(const std::string &n);
    ~Cat() override;
    void hello() override;
};

//// 类的继承
//class Shape{
//public:
//    Shape(double l, double w);
//    virtual ~Shape()=default;
//    double getLength();
//    double getWidth();
//protected:
//    double length;
//    double width;
//};
//
//class RectAngle : public Shape{
//public:
//    RectAngle(double l, double w);
//    double getArea();
//};
//
//class PrintData{
//public:
//    static void print(const int& i);
//    static void print(const double& d);
//    static void print(const std::string& s);
//};
//
//class Person{
//public:
//    Person();
//    explicit Person(const std::string& name);
//    explicit Person(int age);
//    Person(const std::string& name, int age);
//    virtual void print ();
//protected:
//    std::string name;
//    int age;
//};
//
//class Student : public Person{
//public:
//    Student(const std::string& name, int age, double score);
//    void print() override;
//protected:
//    double score;
//};
//
//
//// 类的继承
//void list_1_10();
//// 构造函数重载
//void list_1_9();
//// 函数重载
//void list_1_8();
//void list_1_7();
//// 委托构造函数
//void list_1_6();
////默认是浅拷贝构造
//void list_1_5();
//// 深拷贝构造
//void list_1_4();
//void list_1_3();
//void list_1_2();
//void list_1_1();
//
//
//class Box4{
//public:
//    double length, width, height;
//    Box4(double l, double w, double h);
//    Box4();
//};
//
//class Box3{
//public:
//    double length, width, height;
//    Box3(double l, double w, double h);
//    Box3(const Box3 &other);
//};
//
//class Box1{
//public:
//    double length, width, height;
//    //无参构造函数
//    Box1();
//};
//
//class Box2{
//public:
//    double length, width, height;
//    //无参构造函数
//    Box2(double l, double w, double h);
//};

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
