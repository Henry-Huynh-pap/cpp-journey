#include <iostream>
using namespace std;
int main(){

    int n, i;
    int result = 0;

    cout << "Enter a number: ";
    cin >> n;

    if( n <= 0){
        cout << "N";
        return 0;
    }

    for(i = 1; i <= n; i++){
        if(n % i == 0  &&  i % 2 != 0){
            result = i;
        }
    }

    cout << result;

    return 0;
}