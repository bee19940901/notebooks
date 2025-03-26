////
//// Created by Administrator on 2025/3/26.
////
//
//// 格式化
//#include <iomanip>
//#include <iostream>
//#include <cmath>
//
//int main(){
//
//    // 设置输出的宽度, 右对齐
//    std::cout << std::setw(16) << "Bee" << std::setw(16) << "Lily" << std::endl;
//
//    // 设置输出宽度，左对齐
//    std::cout << std::left << std::setw(16) << "Bee" << std::setw(16) << "Lily" << std::endl;
//
//    // 使用指定字符进行填充（左对齐）
//     std::cout << std::left << std::setfill('+')<< std::setw(16) << "Bee"  << std::setw(16) << "Lily" << std::endl;
//
//    // 使用指定字符进行填充（右对齐）
//    std::cout << std::right << std::setfill('*') << std::setw(16) << "Bee" << std::setw(16) << "Lily" << std::endl;
//
//    // 固定小数点位置
//    std::cout << std::setprecision(4) << M_PI << std::endl;
//    std::cout << std::setprecision(8) << M_PI << std::endl;
//    std::cout << std::setprecision(16) << M_PI << std::endl;
//
//    // 使用科学计数法
//    std::cout << std::scientific << M_PI  * 10000<< std::endl;
//
//    //使用小数计数法
//    std::cout << std::fixed << M_PI  * 10000<< std::endl;
//
//
//
//
//
//    return EXIT_SUCCESS;
//}