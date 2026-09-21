#include <iostream>
#include <cmath>
#include<string>
using namespace std;

int main(){

    int x,y;
    int p,s,q;

    cout << "Enter x: ";
    cin >> x;

    cout << "Enter y: ";
    cin >> y;

    p = x * y;
    s = x + y;
    q = s*s + pow(p, s*x) * (p+y);


    cout << "The value of p is: " << p << '\n';
    cout << "The value of s is: " << s << '\n';
    cout << "The value of q is: " << q << '\n';

    return 0;
}