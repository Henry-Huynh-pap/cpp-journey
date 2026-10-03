#include <iostream>
using namespace std;
int main(){
    
    int num1,num2,num3;

    cout << "Enter the value of angle 1: ";
    cin >> num1;

    cout << "Enter the value of angle 1: ";
    cin >> num2;

    cout << "Enter the value of angle 1: ";
    cin >> num3;

    if(num1 + num2 + num3 == 180){
        cout << "It is the triangle";
    }
    else{
        cout << "It's not the triangle";
    }
    
    return 0;
}