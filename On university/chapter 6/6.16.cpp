#include <bits/stdc++.h>

using namespace std;

int sumToN(int n);

int main(){

    cout << sumToN(8);

    return 0;
}

int sumToN(int n){

    int result = 0;

    for(int i = 1; i <= n; i++){
        result += i;
    }

    return result;
}