cmake_minimum_required(VERSION 3.22)

project(Connect-Four)

set(CMAKE_BUILD_TYPE Debug)
enable_testing()

add_subdirectory(Executable)
add_subdirectory(Library)
add_subdirectory(Tests)
