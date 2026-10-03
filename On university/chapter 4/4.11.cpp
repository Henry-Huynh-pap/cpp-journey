#include <iostream>
using namespace std;
int main(){

    double a,b,c;

    cout << "Enter the first side of a triangle: ";
    cin >> a;

    cout << "Enter the second side of a triangle: ";
    cin >> b;

    cout << "Enter the third side of a triangle: ";
    cin >> c;

    if( a==b && b==c && a==c ){
        cout << "E";
    }
    else if( a==b || b== c || a==c){
        cout << "I";
    }
    else if( a > 0 && b >0 && c > 0){
        cout << "S";
    }
    else{
        cout << "Not triangle";
    }

    return 0;
}