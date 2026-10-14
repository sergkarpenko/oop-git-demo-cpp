cmake_minimum_required(VERSION 3.16)
project(OopGitDemo LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(oop_git_demo main.cpp)

if(MSVC)
    target_compile_options(oop_git_demo PRIVATE /utf-8)
endif()
