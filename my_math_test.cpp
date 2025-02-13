
// my_math_test.cpp (Test file)
#include "my_math.h"

#include "gtest/gtest.h"

TEST(MyMathTest, AddPositiveNumbers) {
  MyMath math;
  EXPECT_EQ(math.add(2, 3), 5);
  EXPECT_EQ(math.add(10, 20), 30);
}

TEST(MyMathTest, AddNegativeNumbers) {
  MyMath math;
  EXPECT_EQ(math.add(-2, -3), -5);
  EXPECT_EQ(math.add(-1, -1), -2);
}

TEST(MyMathTest, SubtractPositiveNumbers) {
  MyMath math;
  EXPECT_EQ(math.subtract(5, 2), 3);
  EXPECT_EQ(math.subtract(20, 10), 10);
}

TEST(MyMathTest, SubtractNegativeNumbers) {
  MyMath math;
  EXPECT_EQ(math.subtract(-5, -2), -3);
  EXPECT_EQ(math.subtract(-1, -1), 0);
}

TEST(MyMathTest, Multiply) {
  MyMath math;
  EXPECT_EQ(math.multiply(2, 3), 6);
  EXPECT_EQ(math.multiply(-2, 3), -6);
  EXPECT_EQ(math.multiply(0, 3), 0);
}

TEST(MyMathTest, Divide) {
  MyMath math;
  EXPECT_EQ(math.divide(6, 2), 3);
  EXPECT_EQ(math.divide(-6, 2), -3);
}

TEST(MyMathTest, DivideByZero) {
  MyMath math;
  EXPECT_THROW(math.divide(6, 0), std::invalid_argument);
}

TEST(MyMathTest, DivideSafe) {
  MyMath math;
  EXPECT_DOUBLE_EQ(math.divide_safe(5, 2),
                   2.5);  // Use EXPECT_DOUBLE_EQ for doubles
  EXPECT_DOUBLE_EQ(
      math.divide_safe(10, 3),
      3.3333333333333335);  // For doubles, you might need to limit precision
}

TEST(MyMathTest, DivideSafeByZero) {
  MyMath math;
  EXPECT_THROW(math.divide_safe(6, 0), std::invalid_argument);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
