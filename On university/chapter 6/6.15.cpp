#include <bits/stdc++.h>

using namespace std;

int factorial(int num);

int main(){

    int num;

    cout << "Enter the positive number: ";
    cin >> num;

    if(num > 0){
        cout << "The factorial value is: " << factorial(num);
    }
    else{
        cout << "Error";
    }

    return 0;
}

int factorial(int num){

    int result = 1;

    for(int i = 1; i <= num; i++){
        result *= i;
    }

    return result;
}