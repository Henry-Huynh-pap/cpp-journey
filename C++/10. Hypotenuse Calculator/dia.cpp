#include <iostream>
#include <cmath>
int main() {

    double a;
    double b;
    double c;

    std::cout << "Enter the value of a: ";
    std::cin >> a;

    std::cout << "Enter the value of b: ";
    std::cin >> b;

    c = sqrt(pow(a,2) + pow(b,2) );

    std::cout << "The value of c is: " << c;

    return 0;

}