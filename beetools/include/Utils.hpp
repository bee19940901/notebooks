//
// Created by Administrator on 2025/3/19.
//

#ifndef BEETOOLS_UTILS_HPP
#define BEETOOLS_UTILS_HPP

#include "iostream"
#include "CLI11.hpp"

class Utils{
public:
    Utils() = delete;
    static void greet(const std::string &h, const std::string& name);
};


#endif //BEETOOLS_UTILS_HPP
