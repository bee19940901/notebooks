//
// Author: Bing Liang
// Email : believer19940901@gmail.com
// Date  : 2025/8/27 17:38
//
//
#include <iostream>
#include "chapter1_3.hpp"

void chapter1_3() {
    // 常量初始化
    const int the_answer = 42;
    const int lucky_number = the_answer / 6;

    // 打印结果
    std::cout << "The Answer = " << the_answer
              << ", Lucky Number = " << lucky_number << std::endl;

    // 1.3.4 条件语句示例
    int x = 0;
    std::cout << "x == 42? " << (x == 42 ? "true" : "false") << std::endl;

    //
}

