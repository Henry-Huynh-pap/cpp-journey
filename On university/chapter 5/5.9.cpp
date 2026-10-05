#include <iostream>
#include <cmath>
using namespace std;
int main(){

    int n, m, a, temp;

    cout << "Enter a first natural number: ";
    cin >> m;

    cout << "Enter a second natural number: ";
    cin >> n;

    cout << "Armstrong number from " << m << " and " << n << " are: ";

    for(int i = m; i <= n; i++){
        
        temp = i; 
        int result = 0;
        
        while(temp > 0){
        a = temp % 10;
        result = result + pow(a,3) ;
        temp = temp / 10;
        }

        if( result == i){
            cout << i << " ";
        }

    }

    return 0;
}