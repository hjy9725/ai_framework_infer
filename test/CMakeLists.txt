cmake_minimum_required(VERSION 3.16)
project(test_tapir)

find_package(GTest REQUIRED)

aux_source_directory(../test DIR_TEST)

set(link_lib pthread glog gtest gflags)  # 添加 gflags

add_executable(tapir_test ${DIR_TEST})
target_link_libraries(tapir_test ${link_lib})

cmake_policy(SET CMP0012 NEW)  # 解决 CMP0012 策略问题