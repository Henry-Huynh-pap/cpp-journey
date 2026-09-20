#include <iostream>
using namespace std;

int main(){

    double num1 = 0;
    double num2 = 0;
    double num3 = 0;
    double num4 = 0;
    double num5 = 0;
    double num6 = 0;

    cout << "Enter number 1: ";
    cin >> num1;

    cout << "Enter number 2: ";
    cin >> num2;

    num3 = num1 + num2;
    num4 = num1 - num2;
    num5 = num1 * num2;
    num6= num1 / num2;

    cout << "The num1 + num2 is: " << num3 << '\n';
    cout << "The num1 - num2 is: " << num4 << '\n';
    cout << "The num1 * num2 is: " << num5 << '\n';
    cout << "The num1 / num2 is: " << num6 << '\n';

    return 0;
}