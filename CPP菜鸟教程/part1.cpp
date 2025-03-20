//
// Created by Administrator on 2025/3/19.
//

#include "part1.hpp"

//Box4::Box4(double l, double w, double h) {
//    length = l;
//    width = w;
//    height = h;
//}
//
//Box4::Box4() : Box4(1, 2, 3) {
//
//}
//
//void list_1_6(){
//    Box4 box1(4, 5, 6);
//    Box4 box2;
//    std::cout
//            << "Length=" << box1.length << std::endl
//            << "Width=" << box1.width << std::endl
//            << "Height=" << box1.height << std::endl;
//    std::cout
//            << "Length=" << box2.length << std::endl
//            << "Width=" << box2.width << std::endl
//            << "Height=" << box2.height << std::endl;
//}
//
//void list_1_5(){
//    Box1 box1;
//    Box1 box2(box1);
//    std::cout
//            << "Length=" << box1.length << std::endl
//            << "Width=" << box1.width << std::endl
//            << "Height=" << box1.height << std::endl;
//    std::cout
//            << "Length=" << box2.length << std::endl
//            << "Width=" << box2.width << std::endl
//            << "Height=" << box2.height << std::endl;
//}
//
//
//Box3::Box3(double l, double w, double h) {
//    length = l;
//    width = w;
//    height = h;
//}
//
//Box3::Box3(const Box3 &other) {
//    length = other.length * 2;
//    width = other.width * 2;
//    height = other.height * 2;
//}
//
//void list_1_4(){
//    Box3 box1(1, 2, 3);
//    Box3 box2(box1);
//    std::cout
//    << "Length=" << box1.length << std::endl
//    << "Width=" << box1.width << std::endl
//    << "Height=" << box1.height << std::endl;
//    std::cout
//    << "Length=" << box2.length << std::endl
//    << "Width=" << box2.width << std::endl
//    << "Height=" << box2.height << std::endl;
//}
//
//void list_1_2(){
//    Box1 box1;
//    std::cout
//    << "Length=" << box1.length << std::endl
//    << "Width=" << box1.width << std::endl
//    << "Height=" << box1.height << std::endl;
//}
//
//void list_1_3(){
//    Box2 box(10, 20 ,30);
//    std::cout
//        << "Length=" << box.length << std::endl
//        << "Width=" << box.width << std::endl
//        << "Height=" << box.height << std::endl;
//}
//
//
//Box1::Box1() {
//    std::cout << "Constructor" << std::endl;
//    length = 1;
//    width = 2;
//    height = 3;
//}
//
//// 有参构造函数
//Box2::Box2(double l, double w, double h) {
//    std::cout << "Constructor" << std::endl;
//    length = l;
//    width = w;
//    height = h;
//}

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
//Shape::Shape(double l, double w) {
//    length = l;
//    width = w;
//}
//
//double Shape::getLength() {
//    return length;
//}
//
//double Shape::getWidth() {
//    return width;
//}
//
//double RectAngle::getArea() {
//    return length * width;
//}
//
//RectAngle::RectAngle(double l, double w) : Shape(l, w) {
//}
//
//void list_1_7(){
//    RectAngle rect(3.1415, 4.1413);
//    std::cout << "Length of Rect is " << rect.getLength() << ".\n";
//    std::cout << "Width of Rect is " << rect.getWidth() << ".\n";
//    std::cout << "Area of Rect is " << rect.getArea() << ".\n";
//}
//
//
//void PrintData::print(const int& i) {
//    std::cout << "Int is " << i << ".\n";
//}
//
//void PrintData::print(const double& d) {
//    std::cout << "Double is " << d << ".\n";
//}
//
//void PrintData::print(const std::string& s) {
//    std::cout << "String is " << s << ".\n";
//}
//
//void list_1_8(){
//    PrintData::print(1);
//    PrintData::print(3.14);
//    PrintData::print("Hello, Bee!");
//}
//
//Person::Person() : Person("Unknown", 0){}
//
//Person::Person(const std::string& name): Person(name, 0) {}
//
//Person::Person(int age): Person("Unknown", age) {}
//
//Person::Person(const std::string& name, int age){
//    this->name = name;
//    this->age = age;
//}
//
//
//void Person::print(){
//    std::cout << "Hello, my name is " << name << ", I'm " << age << " years old.\n";
//}
//
//void list_1_9(){
//    Person().print();
//    Person(32).print();
//    Person("Bee").print();
//    Person("Lily", 28).print();
//}
//
//
//Student::Student(const std::string& name, int age, double score) : Person(name, age) {
//    this->score = score;
//}
//
//void Student::print() {
//    std::cout << "Hello, my name is " << name << ", I'm " << age << " years old, my score is" << score << ".\n";
//}
//
//void list_1_10(){
//    Person().print();
//    Person(32).print();
//    Person("Bee").print();
//    Person("Lily", 28).print();
//    Student("Alison", 35, 95).print();
//}

Animal::Animal(const std::string &n) {
    name = n;
}

Animal::~Animal() {
    std::cout << "Animal destroyed.\n";
}

void Animal::hello() {
    std::cout << "Hello, my name is " << name << ", I am an animal.\n";
}


Dog::Dog(const std::string &n) : Animal(n) {}

Dog::~Dog() {
    std::cout << "Dog destroyed.\n";
}

void Dog::hello() {
    std::cout << "Hello, my name is " << name << ", I am a dog.\n";
}


Cat::Cat(const std::string &n) : Animal(n) {

}

Cat::~Cat() {
    std::cout << "Cat destroyed.\n";
}

void Cat::hello() {
    std::cout << "Hello, my name is " << name << ", I am a cat.\n";
}

void test_1_1(){
//    Animal *animal_p = new Dog("Bee");
//    animal_p->hello();
//    delete animal_p;
//
//    animal_p = new Cat("Lily");
//    animal_p->hello();
//    delete animal_p;
    std::unique_ptr<Animal> animal_p = std::make_unique<Dog>("Bee");
    animal_p->hello();
    animal_p = std::make_unique<Cat>("Lily");
    animal_p->hello();
}