#include <iostream>
using namespace std;

int main(){

    int n,n1,n2;
    int a = 0;
    int b = 0;
    int count = 0;

    cout << "Enter a number: ";
    cin >> n;

    n1 = n;
    n2 = n;

    while(n1 > 0){
        a = a*10 + n1 % 10;
        n1 = n1 /10;
    }

    while(n2 > 0){
        b = b + n2 % 10;
        n2 = n2 /10;
    }

    for(int i = 1; i <= b;i++){
        if(b % i == 0){
            count++;
        }
    }

    if( a == n && count == 2 ){
        cout << "Y";
    }
    else{
        cout << "N";
    }

    return 0;
}