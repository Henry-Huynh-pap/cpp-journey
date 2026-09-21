#include <iostream>
using namespace std;
int main(){

    int a, tenDigits, unitDigits, total;
    
    cout << "Enter the two digit numbers: ";
    cin >> a;

    tenDigits = a / 10;
    unitDigits = a % 10;
    total = tenDigits + unitDigits;
    
    cout << "The total of two digits number is: " << total;

    return 0;
}