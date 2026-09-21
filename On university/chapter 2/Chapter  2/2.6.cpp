#include <iostream>
using namespace std;

int main (){

    double r = 0;
    double pi = 3.14;
    double c = 0;
    double area = 0;

    cout << "Enter the radius of the circle : ";
    cin >> r;

    c = 2*pi*r;
    area = pi*r*r;

    cout << "The perimeter of the circle is : " << c << '\n';
    cout << "The area of the circle is : " << area << '\n';

    return 0;
}