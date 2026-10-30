#include <iostream>
using namespace std;

int main(){

    int primeNum,n,i;
    int count = 0;

    cout << "Enter a number: ";
    cin >> n;

    for(i = 1; i <= n; i++){
        if(n % i ==  0){
            count++;
        }
    }

    if(count == 2 && n % 2 != 0){
        cout << n << " is an odd prime number";
    }
    else if(count == 2 && n % 2 == 0){
        cout << n << " is an even  prime number";
    }
    else{
        cout << n << " is not a prime number";
    }

    return 0;
}