cmake_minimum_required(VERSION 3.16)
project(atl_test CXX)

add_executable(atl_test src/main.cpp)

if (MSVC)
  target_compile_options(atl_test PRIVATE /W4)
endif()
