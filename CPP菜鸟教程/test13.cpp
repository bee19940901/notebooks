//#include <iostream>
//#include <fstream>
//#include <filesystem>
//#include <exception>
//
//template <typename T>
//void check_file_stream(T& fs, const std::filesystem::path& filePath) {
//    if (!fs) {
//        std::cerr << "Error: Cannot open file " << filePath << std::endl;
//        exit(EXIT_FAILURE);
//    }
//}
//
//int main() {
//    const std::string outFileName = "../test13/test.in.txt";
//    std::filesystem::path outFilePath = std::filesystem::absolute(outFileName);
//    std::filesystem::path outDirPath = outFilePath.parent_path();
//
//    try {
//        std::filesystem::create_directories(outDirPath);
//    } catch (const std::exception& err) {
//        std::cerr << "Error: Cannot create directory " << outDirPath << std::endl;
//        return EXIT_FAILURE;
//    }
//
//    // 写入初始内容
//    {
//        std::ofstream fw(outFilePath);
//        check_file_stream(fw, outFilePath);
//        fw << "Hello, world!\nMy name is Bee.\n";
//    }
//
//    // 追加内容
//    {
//        std::ofstream fa(outFilePath, std::ios::app);
//        check_file_stream(fa, outFilePath);
//        fa << "I am 31 years old.\nI love my family.\n";
//    }
//
//    // 读取文件并打印内容
//    {
//        std::ifstream fr(outFilePath);
//        check_file_stream(fr, outFilePath);
//        std::cout << fr.rdbuf();  // 直接输出流，提高性能
//    }
//
//    return EXIT_SUCCESS;
//}
