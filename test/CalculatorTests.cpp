#include "../include/Calculator.h"
#include <gtest/gtest.h>

// interface to unit test
#include "../include/SampleClass.h"

// Each unit test for a given function is added below
TEST (CalculatorTest, divide) {
  Calculator cCalculator;
  EXPECT_EQ (1.0, cCalculator.divide (1.0, 1.0));
  EXPECT_EQ (0.1, cCalculator.divide (0.1, 1.0));
  EXPECT_EQ (-1.0, cCalculator.divide (-1.0, 1.0));
  EXPECT_EQ (-1.0, cCalculator.divide (1.0, -1.0));
  EXPECT_EQ (1.0, cCalculator.divide (-1.0, -1.0));
  EXPECT_EQ (.125, cCalculator.divide (1.0, 8.0));
}

TEST (CalculatorTest, divideExceptions) { 
  Calculator cCalculator; 
 
  EXPECT_THROW (cCalculator.divide (1.0, 0.0), 
  std::runtime_error);
}