#include <iostream>
using namespace std;
int main(){

    int n, a;
    int result = 1;

    cout << "Enter a natutal number: ";
    cin >> n;

    while(n > 0){
        a = n % 10;
        result = result * a ;
        n = n / 10;
    }

    cout << result;

    return 0;
}