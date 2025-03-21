//
// Created by Administrator on 2025/3/21.
//

#include "test1.hpp"

void test1(){
    // 输入内容
    std::string data;
    // 输出文件
    std::string outFile = "../test1.out.txt";
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
    std::ofstream oufile(outPath, std::ios::out);

    outfile.open("../test1.txt");
    std::cout << "Write something to the file:\n";
    std::cin >> data;
    if(!outfile){
        std::cerr << "Error: Cannot open file!\n";
        exit(1);
    }
    outfile << data;
    outfile.close();
}
