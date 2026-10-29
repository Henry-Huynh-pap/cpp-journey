#include <iostream>
using namespace std;

int main(){

    int a,b,i;
    int gcd = 1;
    int lcm = 1;

    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    for(i = 1; i <= a && i <= b; i++){
        if( a % i ==  0 && b % i == 0){
            gcd = i;
        }
    }

    
    while(lcm % a != 0 || lcm % b != 0){
        lcm++;
    }

    cout << gcd << '\n';
    cout << lcm;

    return 0;
}