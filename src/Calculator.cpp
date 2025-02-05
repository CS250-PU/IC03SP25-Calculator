#include "../include/Calculator.h"
#include <iostream>

Calculator::Calculator() {
}

double Calculator::add(double a, double b) {
    return a + b;
}

double Calculator::subtract(double a, double b) {
    return a - b;
}

double Calculator::multiply(double a, double b) { 
    return a * b;
}

double Calculator::divide(double a, double b) {

  if (b == 0) {
    throw std::runtime_error ("Divide by zero");
  }
    return a / b;
}