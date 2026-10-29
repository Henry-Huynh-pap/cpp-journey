#include <iostream>
using namespace std;

int main(){

    int n;
    int a = 0;

    cout << "Enter n: ";
    cin >> n;

    while(n > 0){
        a = a + n % 10;
        n = n / 10;
    }

    if( a % 7 == 0){
        cout << a;
    }
    else{
        cout << "Y";
    }

    return 0;
}