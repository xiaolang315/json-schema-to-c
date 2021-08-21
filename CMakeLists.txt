cmake_minimum_required(VERSION 3.17)

set(name json-schema-to-c)
project(${name})
set(CMAKE_CXX_STANDARD 17)
set(C_STANDARD 99)

include(cmake/cpm.cmake)

add_subdirectory(src)
add_subdirectory(test)

