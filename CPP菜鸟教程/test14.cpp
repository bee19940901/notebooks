//#include <iostream>
//#include <fstream>
//#include <sstream>
//#include <filesystem>
//#include <stdexcept>
//#include <system_error>
//
//// 确保目录存在
//void ensure_directory(const std::filesystem::path &dirPath) {
//    std::error_code ec;
//    if (!std::filesystem::exists(dirPath) &&
//        !std::filesystem::create_directories(dirPath, ec)) {
//        throw std::runtime_error("Error: cannot create directory " + dirPath.string());
//    }
//}
//
//int main(){
//    try {
//        // 定义输入、输出文件的绝对路径
//        const std::filesystem::path inFilePath = std::filesystem::absolute("../test14/infile.txt");
//        const std::filesystem::path outFilePath = std::filesystem::absolute("../test14/outfile.txt");
//
//        // 打开输入文件
//        std::ifstream fin(inFilePath);
//        if (!fin) {
//            throw std::runtime_error("Error: cannot open input file " + inFilePath.string());
//        }
//
//        // 将文件内容读取到字符串流中
//        std::ostringstream oss;
//        oss << fin.rdbuf();
//        fin.close();
//
//        // 利用 istringstream 从字符串中提取数值
//        std::istringstream iss(oss.str());
//        int age;
//        double height, weight;
//        if (!(iss >> age >> height >> weight)) {
//            throw std::runtime_error("Error: failed to parse numeric values from " + inFilePath.string());
//        }
//
//        // 确保输出目录存在
//        ensure_directory(outFilePath.parent_path());
//
//        // 打开输出文件，并写入格式化结果
//        std::ofstream fout(outFilePath);
//        if (!fout) {
//            throw std::runtime_error("Error: cannot open output file " + outFilePath.string());
//        }
//        fout << "Age=" << age << ", Height=" << height << "cm, Weight=" << weight << "kg" << std::endl;
//        fout.close();
//
//        return EXIT_SUCCESS;
//    }
//    catch(const std::exception &ex) {
//        std::cerr << ex.what() << std::endl;
//        return EXIT_FAILURE;
//    }
//}
