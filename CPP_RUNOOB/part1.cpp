//
// Created by Administrator on 2025/3/19.
//

#include "part1.hpp"

Box4::Box4(double l, double w, double h) {
    length = l;
    width = w;
    height = h;
}

Box4::Box4() : Box4(1, 2, 3) {

}

void list_1_6(){
    Box4 box1(4, 5, 6);
    Box4 box2;
    std::cout
            << "Length=" << box1.length << std::endl
            << "Width=" << box1.width << std::endl
            << "Height=" << box1.height << std::endl;
    std::cout
            << "Length=" << box2.length << std::endl
            << "Width=" << box2.width << std::endl
            << "Height=" << box2.height << std::endl;
}

void list_1_5(){
    Box1 box1;
    Box1 box2(box1);
    std::cout
            << "Length=" << box1.length << std::endl
            << "Width=" << box1.width << std::endl
            << "Height=" << box1.height << std::endl;
    std::cout
            << "Length=" << box2.length << std::endl
            << "Width=" << box2.width << std::endl
            << "Height=" << box2.height << std::endl;
}


Box3::Box3(double l, double w, double h) {
    length = l;
    width = w;
    height = h;
}

Box3::Box3(const Box3 &other) {
    length = other.length * 2;
    width = other.width * 2;
    height = other.height * 2;
}

void list_1_4(){
    Box3 box1(1, 2, 3);
    Box3 box2(box1);
    std::cout
    << "Length=" << box1.length << std::endl
    << "Width=" << box1.width << std::endl
    << "Height=" << box1.height << std::endl;
    std::cout
    << "Length=" << box2.length << std::endl
    << "Width=" << box2.width << std::endl
    << "Height=" << box2.height << std::endl;
}

void list_1_2(){
    Box1 box1;
    std::cout
    << "Length=" << box1.length << std::endl
    << "Width=" << box1.width << std::endl
    << "Height=" << box1.height << std::endl;
}

void list_1_3(){
    Box2 box(10, 20 ,30);
    std::cout
        << "Length=" << box.length << std::endl
        << "Width=" << box.width << std::endl
        << "Height=" << box.height << std::endl;
}


Box1::Box1() {
    std::cout << "Constructor" << std::endl;
    length = 1;
    width = 2;
    height = 3;
}

// 有参构造函数
Box2::Box2(double l, double w, double h) {
    std::cout << "Constructor" << std::endl;
    length = l;
    width = w;
    height = h;
}

//Box::Box(double l, double w, double h) : length(l), width(w), height(h) {}
//
//double Box::getLength() const {
//    return length;
//}
//
//double Box::getWidth() const {
//    return width;
//}
//
//double Box::getHeight() const {
//    return height;
//}

//void list_1_1(){
//    Box box(1,2,3);
//    // public变量， 可以直接访问
//    std::cout << "The length of the box is " << box.length << std::endl;
//    // protected 变量， 外部不可访问, 使用公用函数访问
//    // std::cout << "The width of the box is " << box.width << std::endl;
//    std::cout << "The width of the box is " << box.getWidth() << std::endl;
//    // private变量， 外部不可访问, 使用公共函数访问
//    std::cout << "The height of the box is " << box.getHeight() << std::endl;
//    // public 继承, length还是可以直接访问
//    Box1 box1(1, 2, 3);
//    std::cout << "The length of the box is " << box1.length << std::endl;
//    // protected继承， public变量变成了protected变量，不可访问,使用公用函数访问
//    Box2 box2(1, 2,3);
//    std::cout << "The length of the box is " << box2.length << std::endl;
//    std::cout << "The length of the box is " << box2.getLength() << std::endl;
//}
