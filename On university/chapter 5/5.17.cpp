#include <iostream>
using namespace std;
int main(){

    int n,i,a;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    for(i = 0; i <= n; i++ ){
        
        sum = sum + i;

        if(sum <= n){
            a = i;
        }
        else{
            break;
        }
    }

    if( n <= 0){
        cout << "N";
    }
    else{
        cout << a;
    }
    

    return 0;
}