#include <iostream>
using namespace std;
int main(){

    long a,b,c;

    cout << "Enter the value of a: ";
    cin >> a;

    cout << "Enter the value of b: ";
    cin >> b;

    cout << "Enter the value of c: ";
    cin >> c;

    if(a < -999999999 || a > 999999999 ||
       b < -999999999 || b > 999999999 ||
       c < -999999999 || c > 999999999) 
    {
        cout << "Not valid";
        return 0;
    }

    if(a > b){
        swap(a,b);
    }
    if(a > c){
        swap(a,c);
    }
    if(b > c){
        swap(b,c);
    }
    

    cout << a << " " << b << " " << c;
    return 0;
}