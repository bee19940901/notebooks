#include <iostream>
#include "include/CLI11.hpp"
#include "include/utils.hpp"

int main(int argc, char** argv) {
    CLI::App app{"Biological Tools Powered by C++"};

    CLI::App* hello_app = app.add_subcommand("hello", "Say Hello");
    std::string hello_name;
    hello_app->add_option("-n, --name", hello_name, "Your Name");

    CLI::App* hey_app = app.add_subcommand("hey", "Say Hey");
    std::string hey_name;
    hey_app->add_option("-n, --name", hey_name, "Your Name");

    CLI::App* hi_app = app.add_subcommand("hi", "Say Hi");
    std::string hi_name;
    hi_app->add_option("-n, --name", hi_name, "Your Name");

    CLI11_PARSE(app, argc, argv);

    if(hello_app->parsed()){
        Utils::greet(hello_name);
    } else if (hey_app->parsed()){
        Utils::greet(hey_name);
    } else if(hi_app->parsed()) {
        Utils::greet(hi_name);
    } else {
        std::cerr << "Error: Invalided Subcommand" << std::endl;
        return 1;
    }
    return 0;
}
