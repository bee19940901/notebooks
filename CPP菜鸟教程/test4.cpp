////
//// Created by Administrator on 2025/3/25.
////
//
//#include "test4.hpp"
//
//#include <utility>
//
//MyException::MyException(std::string msg) : message(std::move(msg)) {}
//
//const char *MyException::what() const noexcept {
//    return message.c_str();
//}
//
//void test4(){
//    std::string fileName = "../hello.txt";
//    std::filesystem::path filePath = std::filesystem::absolute(fileName);
//    std::ifstream fr(filePath);
//    if(!fr){
//        throw MyException("Error: Cant not open file " + filePath.string());
//    }
//    std::cout << "File " << filePath.string() << "opened.\n";
//}
//
//
