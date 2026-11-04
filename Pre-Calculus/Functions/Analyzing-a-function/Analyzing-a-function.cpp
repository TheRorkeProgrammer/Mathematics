#include <cmath>
#include <iostream>
#include <memory>
#include <string>

int analyzing_a_function() {
  double x;

  // f(x) = x\u00B2 + 4
  double function = pow(x, 2) + 4;

  // f(3)
  x = 3;
  std::cout << "f(3)" << std::endl;
  std::cout << "x\u00B2 + 4" << std::endl;
  std::cout << "(3)\u00B2 + 4 = " << function << std::endl;

  // f(-2)
  x = -2;
  std::cout << "f(-2)" << std::endl;
  std::cout << "x\u00B2 + 4" << std::endl;
  std::cout << "(-2)\u00B2 + 4 = " << function << std::endl;

  // f(5\u221A)
  x = std::sqrt(5);
  std::cout << "f(\u221A5)" << std::endl;
  std::cout << "x\u00B2 + 4" << std::endl;
  std::cout << "(\u221A5)\u00B2 + 4 = " << function << std::endl;

  return 0;
}

int main() {
  analyzing_a_function();

  return 0;
}