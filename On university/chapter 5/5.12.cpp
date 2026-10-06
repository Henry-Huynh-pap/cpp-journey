#include <iostream>
using namespace std;
int main (){

    int n, sum;
    int a = 0;
    int b = 1;

    cout << "Enter a number: ";
    cin >> n;

    cout << "F0 = 0, " << "F1 = 1, ";

    for(int i = 2; i <= n; i++){

        sum = a + b;
        a = b;
        b = sum;

        cout << "F" << i << " = " << sum << " ";
    }

    return 0;
}