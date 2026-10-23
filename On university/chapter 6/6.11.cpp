#include <iostream>
using namespace std;

double areaOfCircle(int a);

int main(){

    int r;

    cout << "Enter a radian value: ";
    cin >> r;

    cout << "The radian value is: ";
    cout << areaOfCircle(r);

    return 0;
}

double areaOfCircle(int a){
    return 3.14*a*a;
}