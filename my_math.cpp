// my_math.cpp (Implementation file)
#include "my_math.h"

#include <stdexcept>  // For std::invalid_argument

int MyMath::add(int a, int b) { return a + b; }

int MyMath::subtract(int a, int b) { return a - b; }

int MyMath::multiply(int a, int b) { return a * b; }

int MyMath::divide(int a, int b) {
  if (b == 0) {
    throw std::invalid_argument("Division by zero");
  }
  return a / b;
}

double MyMath::divide_safe(int a, int b) {
  if (b == 0) {
    throw std::invalid_argument("Division by zero");
  }
  return static_cast<double>(a) /
         b;  // Cast to double for floating-point division
}
