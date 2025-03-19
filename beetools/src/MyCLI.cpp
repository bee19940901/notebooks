//
// Created by Administrator on 2025/3/19.
//

#include "../include/MyCLI.hpp"

int MyCLI::setup(CLI::App& app, int argc, char** argv) {

    CLI::App* hello_app = app.add_subcommand("hello", "Say Hello");
    std::string hello_name;
    hello_app->add_option("-n, --name", hello_name, "Your Name");

    CLI::App* hey_app = app.add_subcommand("hey", "Say Hey");
    std::string hey_name;
    hey_app->add_option("-n, --name", hey_name, "Your Name");

    CLI::App* hi_app = app.add_subcommand("hi", "Say Hi");
    std::string hi_name;
    hi_app->add_option("-n, --name", hi_name, "Your Name");

    // 解析命令行参数，并返回状态码
    CLI11_PARSE(app, argc, argv);

    if (hello_app->parsed()) {
        Utils::greet("Hello", hello_name);
    } else if (hey_app->parsed()) {
        Utils::greet("Hey", hey_name);
    } else if (hi_app->parsed()) {
        Utils::greet("Hi", hi_name);
    } else {
        std::cerr << "Error: Invalid Subcommand" << std::endl;
        return 1;  // 解析成功但无效命令，返回错误
    }

    return 0; // 成功执行
}
