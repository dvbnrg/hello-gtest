// my_math.h (Header file)
#ifndef MY_MATH_H
#define MY_MATH_H

class MyMath {
public:
  int add(int a, int b);
  int subtract(int a, int b);
  int multiply(int a, int b);
  int divide(int a, int b);

  // Example of a function that might throw an exception
  double divide_safe(int a, int b);
};

#endif
