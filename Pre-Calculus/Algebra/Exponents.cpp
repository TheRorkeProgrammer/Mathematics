#include <iostream>
#include <cmath>
#include <memory>

int exponentEquationOne() {
    int t;
    double equation;

    std::cout << "Enter number t: " << std::endl;
    std::cin >> t;

    equation = std::pow(t, 5) * std::pow(t, 2);

    std::cout << "Result: " << equation << std::endl;

    return 0;
}


int exponentEquationThree() {
    //  23 a
    int a;
    double equation;

    std::cout << "Enter number a: " << std::endl;
    std::cin >> a;

    equation = std::pow(a, 9) + std::pow(a, -2) / a;
    
    std::cout << "Result: " << equation << std::endl;

    return 0;
}

// int exponentEquationTwo() {

// }

int main() {
    exponentEquationOne();
    exponentEquationThree();

    return 0;
}