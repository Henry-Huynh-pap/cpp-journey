#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int num1,num2,i;

    cout << "Enter num 1: ";
    cin >> num1;

    cout << "Enter num 2: ";
    cin >> num2;

    int gcd = 1;
    for(i = 1; i <= num1 && i <= num2; i++){
        if(num1 % i == 0 && num2 % i == 0){
            gcd = max(gcd,i);
        }
    }

    cout << gcd << "\n";

    int lcm = 1;
    while(lcm % num1 != 0 || lcm % num2 != 0){
        lcm++;
    }

    cout << lcm;

    return 0;
}