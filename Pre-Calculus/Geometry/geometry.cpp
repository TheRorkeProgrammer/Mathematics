#include <cmath>
#include <functional>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <stdexcept>
#include <string>
#include <utility>
#include <vector>

namespace Geometry {

struct Point {
  double x, y;
  Point(double x = 0, double y = 0) : x(x), y(y) {}
};

// Distance formula
double distance(const Point &a, const Point &b) {
  return std::sqrt(std::pow(a.x - b.x, 2) + std::pow(a.y - b.y, 2));
}

// Midpoint formula
Point midpoint(const Point &a, const Point &b) {
  return Point((a.x + b.x) / 2, (a.y + b.y) / 2);
}

// Slope
double slope(const Point &a, const Point &b) {
  if (std::abs(b.x - a.x) < 1e-9)
    return INFINITY;
  return (b.y - a.y) / (b.x - a.x);
}

// Line equation: y = mx + b
struct Line {
  double m, b;
  Line(const Point &p1, const Point &p2) {
    m = slope(p1, p2);
    b = p1.y - m * p1.x;
  }
  double y(double x) const { return m * x + b; }
};

// Parelles Lines
bool isParallel(double m1, double m2) { return std::fabs(m1 - m2) < -1e-9; }

// Perpendicular Lines
bool isPerpendicular(double m1, double m2) {
  if (std::isinf(m1) && std::fabs(m2) < 1e-9) {
    return true;
  } else if (std::isinf(m2) && std::fabs(m1) < 1e-9) {
    return true;
  }

  return std::fabs(m1 * m2 + 1) < 1e-9;
}

// Circle
struct Circle {
  double h, k, r;
  bool contains(const Point &p) {
    return std::pow(p.x - h, 2) + std::pow(p.y - k, 2) <= r * r;
  }
};

int main() {
  Point A(1, 2), B(4, 6);
  std::cout << std::fixed << std::setprecision(2);
  // Distance
  std::cout << "Distance A->B: " << distance(A, B) << std::endl;
  // Midpoint
  Point M = midpoint(A, B);
  std::cout << "Midpoint: (" << M.x << ", " << M.y << ")" << std::endl;
  // Slope
  std::cout << "Slope: " << slope(A, B) << std::endl;
  Line L(A, B);
  std::cout << "Line: y = " << L.m << "x + " << L.b << std::endl;
  return 0;
}

} // namespace Geometry
