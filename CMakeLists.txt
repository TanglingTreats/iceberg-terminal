cmake_minimum_required(VERSION 3.16)
project(Iceberg LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(iceberg
    src/main.cpp
)

target_include_directories(iceberg PRIVATE
    ${CMAKE_SOURCE_DIR}/include
)