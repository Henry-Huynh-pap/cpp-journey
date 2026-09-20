#include <iostream>
using namespace std;

int main () {

    int num1 = 0;
    int num2 = 0;
    int num3 = 0;

    cout << "Enter the hours : ";
    cin >> num1;

    cout << "Enter the minutes : ";
    cin >> num2;

    num3 = num1*60 + num2;

    cout << "The total minuters of the program is : " << num3;

    return 0;
}