#include <iostream>
using namespace std;
int main(){

    int n , a, temp;
    int reversed = 0;

    cout << "Enter a number: ";
    cin >> n;

    temp = n;

    while(n > 0){
        a = n % 10;
        reversed = reversed * 10 + a;
        n = n / 10;
    }

    if( reversed == temp){
            cout << reversed << " is a palindrome number";
        }

return 0;
}