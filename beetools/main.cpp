#include "include/MyCLI.hpp"

int main(int argc, char** argv) {
    CLI::App app{"Biological Tools Powered by C++"};
    return MyCLI::setup(app, argc, argv);
}
