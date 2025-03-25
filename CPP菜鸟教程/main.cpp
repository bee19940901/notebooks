#include <iostream>
#include "runoob.hpp"
#include "part1.hpp"
#include "Chapter1.hpp"
#include "Chapter2.hpp"
#include "test1.hpp"
#include "test2.hpp"
#include "test3.hpp"

int main(int argc, char **argv) {

    try{
        // 抛出异常
        test3();
    } catch (const std::exception &err){
        std::cout << "Error: "<< err.what() << std::endl;
        return 1;
    }
    //    test2();

//    test1();
//    chapter2();
//    chapter1();

    return 0;
}
