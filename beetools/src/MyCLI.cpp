#include "../include/MyCLI.hpp"

int MyCLI::setup(CLI::App& app, int argc, char** argv) {

    // 定义 hello 子命令
    CLI::App* hello_app = app.add_subcommand("hello", "Say Hello");
    std::string hello_name;
    hello_app->add_option("-n, --name", hello_name, "Your Name");

    // 定义 hey 子命令
    CLI::App* hey_app = app.add_subcommand("hey", "Say Hey");
    std::string hey_name;
    hey_app->add_option("-n, --name", hey_name, "Your Name");

    // 定义 hi 子命令
    CLI::App* hi_app = app.add_subcommand("hi", "Say Hi");
    std::string hi_name;
    hi_app->add_option("-n, --name", hi_name, "Your Name");

    // 定义 fasta_cut 子命令
    auto fasta_cut_app = app.add_subcommand("fasta_cut", "Cut Fasta Seq by certain length");
    std::string position;
    int length;
    fasta_cut_app->add_option("-l, --length", length, "Remained Seq Length");
    fasta_cut_app->add_option("-p, --position", position,"Save left or right");

    // 解析命令行参数
    CLI11_PARSE(app, argc, argv);

    // 判断各个子命令是否被执行，并根据不同的子命令进行处理
    if (hello_app->parsed()) {
        Utils::greet("Hello", hello_name);
    } else if (hey_app->parsed()) {
        Utils::greet("Hey", hey_name);
    } else if (hi_app->parsed()) {
        Utils::greet("Hi", hi_name);
    } else if(fasta_cut_app->parsed()) {
        // 根据解析到的参数执行相应的操作
        std::cout << "We will save " << length << " from " << position << ".\n";
    } else {
        std::cerr << "Error: Invalid Subcommand" << std::endl;
        return 1;  // 如果没有任何子命令被执行，返回错误代码
    }

    return 0; // 成功执行
}
