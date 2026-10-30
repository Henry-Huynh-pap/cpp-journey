#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int n, numerator;
    double i;
    double denominator = 0;
    double y = 0;

    cout << "Enter a number: ";
    cin >> n;

    for( i = 1; i <= n; i++){
        denominator = denominator + i*i;
        y = y + 1/denominator;
    }

    cout << showpoint << fixed << setprecision(4) << y;

    return 0;
}