#include <iostream>
#include <cmath>

namespace base {
    double x;
}
namespace perp {
    double x;
}

int main() {
    std::cout << "Please enter lenght of Perpendicular: ";
    std::cin >> std::ws >> perp::x;
    
    std::cout << "Please enter lenght of Base: ";
    std::cin >> std::ws >> base::x;

    std::cout << "Hypontenuse: " << sqrt(pow(perp::x, 2) + pow(base::x, 2));

    return 0;
}