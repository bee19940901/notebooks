cmake_minimum_required(VERSION 3.24.2)
project(CPP)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 添加可执行文件
add_executable(CPP
        src/main.cpp
        include/list2_3.hpp src/list2_3.cpp)

# 添加 include 目录（放在 add_executable 之后）
target_include_directories(
        CPP
        PRIVATE ${PROJECT_SOURCE_DIR}/include
)
