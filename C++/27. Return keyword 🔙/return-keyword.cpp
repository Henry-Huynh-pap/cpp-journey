#include <iostream>

double square (double length);
double cube (double length);

int main () {

    double length;

    std::cout << "Enter the value of length: ";
    std::cin >> length;

    //double area = square( length);
    double area = cube (length);

    std::cout << "The value of area is: " << area;

    return 0;
}

double square (double length) {
    double result = length * length;
    return result;
}
double cube (double length) {
    double result = length * length* length;
    return result;
}