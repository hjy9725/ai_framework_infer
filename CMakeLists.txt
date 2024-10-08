cmake_minimum_required(VERSION 3.16)
project(tapir)

set(CMAKE_CXX_STANDARD 17)


set(link_lib glog pthread gflags gtest)
set(link_math_lib armadillo blas lapack)
add_executable(tapir main.cpp)

target_include_directories(tapir PUBLIC /usr/include/armadillo_bits)
target_include_directories(tapir PUBLIC ${GTEST_INCLUDE_DIRS})