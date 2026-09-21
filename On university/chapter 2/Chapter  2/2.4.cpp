#include <iostream>
using namespace std;
int main (){

    int num1 = 10;
    int num2 = 2;
    int temp;

    temp = num1;
    num1 = num2;
    num2 = temp;
    
    cout << num1 << '\n';
    cout << num2 << '\n';

    return 0;
}