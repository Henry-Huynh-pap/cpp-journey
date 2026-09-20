#include <iostream>
using namespace std;

int main (){

    int num1 = 0;
    int num2 = 0;
    int num3 = 0;

    cout << "Enter the first angle of the triangle : ";
    cin >> num1;

    cout << "Enter the second angle of the triangle : ";
    cin >> num2;

    num3 = 180 - num1 - num2;

    cout << "The third angle of the triangle is : " << num3;

    return 0;
}