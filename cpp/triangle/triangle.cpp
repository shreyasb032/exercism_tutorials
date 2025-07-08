#include "triangle.h"
#include <stdexcept>

namespace triangle {

// TODO: add your solution here

flavor kind(double a, double b, double c) {
    if (a <= 0 || b <= 0 || c <= 0) {
        throw std::domain_error{"Side lengths must be positive"};
    }
    bool condition1 = a + b >= c;
    bool condition2 = b + c >= a;
    bool condition3 = c + a >= b;
    if (!(condition1 && condition2 && condition3)) {
        // invalid triangle
        throw std::domain_error{"Triangle inequality not satisfied"};
    }
    // Valid triangle
    // Scalene
    if (a != b && b != c && c != a) {
        return flavor::scalene;
    }
    // Equilateral
    if (a == b && b == c) {
        return flavor::equilateral;
    }

    // Isosceles
    return flavor::isosceles;
}

}  // namespace triangle
