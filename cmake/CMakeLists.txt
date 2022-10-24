cmake_minimum_required(VERSION 3.16.3)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(test 0.1.0)
add_executable(test main.cpp square.cpp sum.cpp min.cpp)
configure_file(config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h)
target_include_directories(
    test
    PRIVATE
    ${CMAKE_CURRENT_BINARY_DIR}
)
set_target_properties(
    test PROPERTIES
    CXX_STANDART 11
    CXX_STANDART_REQUIRED ON
)
