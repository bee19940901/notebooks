//
// Created by Administrator on 2025/3/25.
//

#ifndef CPP_TEST2_HPP
#define CPP_TEST2_HPP

// 将fastq文件读取到向量中

#include <iostream>
#include <vector>
#include <fstream>
#include <filesystem>
#include <string>
#include "cstring"

struct FastQ {
    std::string id;
    std::string sequence;
    std::string plus;
    std::string quality;
};

std::vector<FastQ> readFastQ(const std::string &fileName);

void writeFastQ(const std::vector<FastQ> &outRecords, const std::string &outFileName, int outLength );

void cutFastQ(const std::string &inFileName, const std::string &outFileName, int out_length);

void test2();

#endif //CPP_TEST2_HPP
