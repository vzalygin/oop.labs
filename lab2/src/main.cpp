#include <iostream>
#include <math.h>

int main() {
    double x;
    std::cout << "Input the x" << std::endl;
    std::cin >> x;
    double y = tan(x*x*(x-2))/exp(x);
    std::cout << "expression tan(x^2*(x-2))/e^x where x = " << x << " equals " << y << std::endl;
    return 0;
}