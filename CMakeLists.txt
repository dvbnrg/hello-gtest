cmake_minimum_required(VERSION 3.10)
project(MyMathTests)

find_package(GTest REQUIRED)

add_executable(my_math_tests my_math.cpp my_math_test.cpp)
target_link_libraries(my_math_tests GTest::gtest)  # Modern CMake linking
# or
#target_link_libraries(my_math_tests gtest) # Older CMake linking
