//
// Created by Administrator on 2025/3/21.
//

#include "test1.hpp"

void test1(){
    // 输入内容
    std::vector<std::string> content = {
            "Hello, my name is Bee.",
            "I am 30 years old.",
            "I am 173.5cm tall.",
            "my weight is 75.0kg."
    };
    // 输出文件
    std::string outFile = "../test/out.txt";
    // 输出文件绝对路径
    std::filesystem::path outPath = std::filesystem::absolute(outFile);
    // 输出目录
    std::filesystem::path outDir = outPath.parent_path();
    // 如果输出目录不存在，尝试创建输出目录
    if(!std::filesystem::exists(outDir)){
        try {
            std::filesystem::create_directories(outDir);
        } catch (const std::exception &e){
            std::cerr
            << "Error: cannot create directory " << outDir.string() << ".\n"
            << e.what() << std::endl;
            return;
        }
    }
    // 打开文件
    std::ofstream fw(outPath, std::ios::out);
    if(!fw){
        std::cerr << "Error: Cannot open file!\n";
        return;
    }
    for(const auto &line: content){
        fw << line << std::endl;
    }
    fw.close();
}
