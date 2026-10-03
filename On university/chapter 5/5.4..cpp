#include <iostream>
using namespace std;
int main() {

    int n; 
    int sum = 0; 
    

    cout << "Enter the number n from the keyboard: ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        sum = sum + (i*i);
    }

    cout << sum;

    return 0;
}