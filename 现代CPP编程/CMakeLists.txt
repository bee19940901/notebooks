cmake_minimum_required(VERSION 4.0)
project(CPP)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 添加可执行文件
add_executable(CPP
        src/chapter1_3.cpp
        src/main.cpp
)

# 添加 include 目录（放在 add_executable 之后）
target_include_directories(
        CPP
        PRIVATE ${PROJECT_SOURCE_DIR}/include
)
