#include <iostream>
#include <cmath>

int main() {

    double a = 3.99;
    double b = -4;
    double c;

    //c = std::max(a, b);
    //c = std:: min(a, b);
    //c = pow(3,4);
    //c = sqrt (9);
    //c = round (a);
    //c = abs(b);
    c = floor(a);

    std::cout << c;

    return 0;
}
