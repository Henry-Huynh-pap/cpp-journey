#include <iostream>
using namespace std;

int main(){

    int n,i,a;
    int b = 0;
    int c = 0;

    cout << "Enter n: ";
    cin >> n;

    for(i = 1; i <= n; i++){
        if( n % i == 0){
            b = i;
            c = c + b;
        }
    }

    if( c == n*2){
        cout << "Y";
    }
    else{
        cout << "N";
    }

    return 0;
}