#include <iostream>
#include <string>

using namespace std;

int main(){

    double v0 = 0;
    double a = 0;
    double t = 0;
    double v = 0;

    cout << "Enter the initial velocity value: ";
    cin >> v0;

    cout << "Enter the acceleration value: ";
    cin >> a;

    cout << "Enter the time value: ";
    cin >> t;

    v = v0 + a*t;

    cout << "The final speed of the car is: " << v;

    return 0;
}