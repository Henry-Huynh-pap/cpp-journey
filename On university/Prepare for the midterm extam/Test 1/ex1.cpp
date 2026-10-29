#include <iostream>
using namespace std;

int main(){
    int n, i;
    double mau = 0;
    double result = 0;

    cout << "Enter the natural number: ";
    cin >> n;

    if( n  > 0){
        for(i = 1; i <= n; i++){
        mau = mau + static_cast<double>(i);
        result = result + 1/ mau;
    }
    cout << result;
    }
    else{
        cout << "Fail";
    }

    return 0;
}