////
//// Created by Administrator on 2025/3/26.
////
//
//#include "test6.hpp"
//
//Person::Person(const std::string &n) {
//    name = n;
//    std::cout << "Person created, value = "  << name << std::endl;
//}
//
//Person::~Person() {
//    std::cout << "Person destroyed, value = " << name << std::endl;
//}
//
//void Person::hello() const {
//    std::cout << "Hello, my name is " << name << ".\n";
//}
//
//void Person::setName(const std::string &n) {
//    name = n;
//}
//
//void test6(){
//    // 使用new动态分布内存
//    auto *bee_p = new Person("Bee");
//    bee_p->hello();
//    delete bee_p;
//    // 使用unique_prt
//    std::unique_ptr<Person> p2 = std::make_unique<Person>("Lily");
//    p2->hello();
//    // 将p2的所有权转移到p3
//    std::unique_ptr<Person> p3 = std::move(p2);
//    p3->hello();
//    if(!p2){
//        std::cout << "p2 is null" << std::endl;
//    }
//    // 将所有权转移到一个共享指针上
//    std::shared_ptr<Person> p4 = std::move(p3);
//    // 共享
//    std::shared_ptr<Person> p5 = p4;
//    std::shared_ptr<Person> p6 = p5;
//    p4->setName("Bee");
//    std::cout << "p4 = ";
//    p4->hello();
//    std::cout << std::endl;
//    std::cout << "p5 = ";
//    p5->hello();
//    std::cout << std::endl;
//    std::cout << "p6 = ";
//    p6->hello();
//    std::cout << std::endl;
//    std::cout << "Use Count = " << p6.use_count() << std::endl;
//}