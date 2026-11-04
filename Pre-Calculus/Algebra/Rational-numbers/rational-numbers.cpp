#include <iostream>
#include <cmath>
#include <memory>

int rationalNumberEquation() {
    double r;
    double m;
    double n;

    std::cout << "m: " << std::endl;
    std::cin >> m;
    std::cout << "n: " << std::endl;
    std::cin >> n;

    r = m / n; 
    std::cout << "Result: " << r << std::endl;

    return 0;
}

int main() {
    rationalNumberEquation();
    return 0;
}