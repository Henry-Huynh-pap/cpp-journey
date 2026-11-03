#include <bits/stdc++.h>
using namespace std;

int primorial(int n);

int main(){

    int n,result;

    cout << "Enter n: ";
    cin >> n;

    if(n >= 1){
        result = primorial(n);
        cout << result;
    }
    else{
        cout << "Error";
    }

    return 0;
}

int primorial(int n){

    int countDivisor = 0;
    int countPrime = 0;
    int temp = 2;
    int primorial = 1;

    while(n != countPrime){
        for(int i = 1; i <= temp; i++){
            if(temp % i == 0){
                countDivisor++;
            }
        }

        if(countDivisor == 2){
            countPrime++;
            primorial *= temp;
        }

        temp++;
        countDivisor = 0;
    }

    return primorial;
}
