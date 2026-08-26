#include <iostream>
#include <cmath>
int main() {

    double a;
    double b;
    double c;

    std::cout << "Enter your side a : ";
    std::cin >> a;

    std::cout << "Enter your side b : ";
    std::cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2 ));

    std::cout << "The c is : " << c;
    
    return 0;

}