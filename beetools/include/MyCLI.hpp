//
// Created by Administrator on 2025/3/19.
//

#ifndef BEETOOLS_MYCLI_HPP
#define BEETOOLS_MYCLI_HPP

#include "CLI11.hpp"
#include "utils.hpp"

class MyCLI {
public:
    MyCLI()=delete;
    static int setup(CLI::App& app, int argc, char** argv);
};

#endif //BEETOOLS_MYCLI_HPP
