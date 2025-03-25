//
// Created by Administrator on 2025/3/25.
//

#include "test3.hpp"

// 抛出异常
void test3(){
    std::ifstream fr("../hello.txt");
    if(!fr){
        throw std::runtime_error("Can not open file ../hello.txt");
    }
    std::string line;
    while (std::getline(fr, line)){
        std::cout << line << std::endl;
    }
}
