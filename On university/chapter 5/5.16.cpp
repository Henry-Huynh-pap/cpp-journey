#include <iostream>
using namespace std;
int main(){

    int n, a;
    int temp = 0;
    int reverse = 0;

    cout << "Enter a number: ";
    cin >> n;

    while(n > 0){
        a = n % 10;
        temp = temp*10 + a;
        n = n / 10;
    }

    while(temp > 0){
        a = temp % 10;
        if(a % 2 != 0){
            reverse = reverse*10 + a;
        }
        temp = temp / 10;
    }

    if(reverse == 0){
        cout << "N";
    }
    else{
        cout << reverse;
    }

    return 0;
}