#include <iostream>

double square (double length);
double cube (double length);

int main () {

    double length;
    double cubelength;

    std::cout << "Enter the value of length: ";
    std::cin >> length ;
    double area = square (length);

    std::cout << "Enter the value of cube length: ";
    std::cin >> cubelength;
    double cubearea = cube (cubelength);
    

    std::cout << "The value of area is: " << area <<'\n';
    std::cout << "The value of cube area is: " << cubearea;

    return 0;
}

double square (double length) {
    return length * length;
}
double cube (double length) {
    return length * length* length;
}