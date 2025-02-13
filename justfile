@default:
    clang-format -i -style=Google *.cpp
    g++ -o my_math_tests my_math.cpp my_math_test.cpp -lgtest -lpthread
    ./my_math_tests
