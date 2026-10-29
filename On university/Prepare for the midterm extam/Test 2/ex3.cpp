#include <iostream>
using namespace std;
int main(){

    int n,i,a;
    int even = 0;
    int odd = 0;
    int position = 1;

    cout << "Enter n: ";
    cin >> n;

    if(n > 0){

        while(n > 0){
        a = n % 10;
        n = n / 10;
        

        if( position % 2 == 1){
            odd = odd + a;
        }
        else {
            even = even + a;
        }
        position++;
    }

    cout << even << "\n";
    cout << odd;

    }
    else{
        cout << "Failed";
    }
    
    return 0;
}