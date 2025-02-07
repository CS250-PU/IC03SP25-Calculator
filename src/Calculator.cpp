#include "../include/Calculator.h"
#include <iostream>

Calculator::Calculator () {
  clear ();
}

void Calculator::clear () {
  mResult = 0;
}

double Calculator::getResult () {
  return mResult;
}

double Calculator::add (double num1, double num2) {
  mResult = num1 + num2;
  return mResult;
}

double Calculator:: add (double num1) {
  mResult += num1;
  return mResult + num1;
}

double Calculator::subtract (double num1, double num2) {
  return num1 - num2;
}

double Calculator::multiply (double num1, double num2) {
  return num1 * num2;
}

double Calculator::divide (double num1, double num2) {

  if (0 == num2) {
    throw std::runtime_error ("Divide by zero");
  }
  return num1 / num2;
}