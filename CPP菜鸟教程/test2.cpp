//
// Created by Administrator on 2025/3/25.
//

#include "test2.hpp"

std::vector<FastQ> readFastQ(const std::string &fileName){
    // 输出结果
    std::vector<FastQ> outRecords;
    // 打开文件
    std::filesystem::path filePath = std::filesystem::absolute(fileName);
    std::ifstream fr(filePath);
    if(!fr){
        std::cerr << "Error: can not open file " << filePath.string() << std::endl;
        return outRecords;
    }
    std::string id, sequence, plus, quality;
    FastQ fastq;
    while (
            std::getline(fr, id) &&
            std::getline(fr, sequence) &&
            std::getline(fr, plus) &&
            std::getline(fr, quality)
            ){
        outRecords.push_back({id, sequence, plus, quality});
    }
    fr.close();
    return outRecords;
}

void writeFastQ(const std::vector<FastQ> &outRecords, const std::string &outFileName, int outLength ){
    std::filesystem::path outFilePath = std::filesystem::absolute(outFileName);
    std::filesystem::path outDirPath = outFilePath.parent_path();
    if(!exists(outFilePath)){
        try {
            std::filesystem::create_directories(outDirPath);
        } catch (const std::exception &err){
            std::cerr << "Error: can not create directory " << outDirPath.string() << std::endl;
            return;
        }
    }
    std::ofstream fw(outFilePath);
    if(!fw){
        std::cerr << "Error: can not open file " << outFilePath.string() << std::endl;
        return;
    }
    for(const auto &record: outRecords){
        fw << record.id << std::endl;
        fw << record.sequence.substr(0,outLength) << std::endl;
        fw << record.plus << std::endl;
        fw << record.quality.substr(0, outLength) << std::endl;
    }
    fw.close();
}

void cutFastQ(const std::string &inFileName, const std::string &outFileName, int outLength) {
    std::filesystem::path inFilePath = std::filesystem::absolute(inFileName);
    std::filesystem::path outFilePath = std::filesystem::absolute(outFileName);
    std::filesystem::path outDirPath = outFilePath.parent_path();

    // 确保输出目录存在
    if (!std::filesystem::exists(outDirPath)) {
        try {
            std::filesystem::create_directories(outDirPath);
        } catch (const std::exception &err) {
            std::cerr << "Error: cannot create directory " << outDirPath.string() << std::endl;
            return;
        }
    }

    // 打开输入和输出文件
    std::ifstream fr(inFilePath);
    std::ofstream fw(outFilePath, std::ios::out | std::ios::binary);

    if (!fr) {
        std::cerr << "Error: cannot open input file " << inFilePath.string() << std::endl;
        return;
    }
    if (!fw) {
        std::cerr << "Error: cannot open output file " << outFilePath.string() << std::endl;
        return;
    }

    std::string id, sequence, plus, quality;
    while (std::getline(fr, id) &&
           std::getline(fr, sequence) &&
           std::getline(fr, plus) &&
           std::getline(fr, quality)) {
        // 直接裁剪，无需 if-else
        fw << id << '\n'
           << sequence.substr(0, outLength) << '\n'
           << plus << '\n'
           << quality.substr(0, outLength) << '\n';
    }
}


void test2(){
    std::vector<FastQ> records = readFastQ("../test.fq");
    writeFastQ(records, "../out/test.50.fq", 50);
    cutFastQ("../test.fq", "../out/test.out.20bp.fq", 20);
    cutFastQ("../test.fq", "../out/test.out.30bp.fq", 30);
    cutFastQ("../test.fq", "../out/test.out.40bp.fq", 40);
    cutFastQ("../test.fq", "../out/test.out.100bp.fq", 100);
}