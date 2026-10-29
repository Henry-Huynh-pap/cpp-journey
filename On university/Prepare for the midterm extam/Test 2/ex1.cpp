#include <iostream>
using namespace std;

int main(){

    double numerator = 0;
    double  denominator = 0; 
    double result = 0;
    int i, n;

    cout << "Enter n: ";
    cin >> n;

    if(n > 0){
        for(i = 1; i <= n; i++){
            numerator = i;
            denominator += i;
            result += numerator / denominator;
        }

        cout << result;
    }
    else{
        cout << "Failed";
    }

    return 0;
}