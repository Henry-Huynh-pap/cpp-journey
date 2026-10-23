#include <iostream>
using namespace std;

int factorial(int a);

int main(){

    int a;

    cout << "Enter a factorial value: ";
    cin >> a;

    cout << "The factorial value is: ";
    cout << factorial(a);

    return 0;
}

int factorial(int a){

    int result = 1;

    for(int i = 1; i <= a; i++){
        result = result*i;
    }

    return result;
}