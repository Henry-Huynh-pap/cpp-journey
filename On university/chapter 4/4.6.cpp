#include <iostream>
#include <cmath>
using namespace std;
int main(){

    double a,b,c,x1,x2, delta;

    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    cout << "Enter c: ";
    cin >> c;

   if( a == 0 ){

        if( b != 0){
        x1 = -c / b;
        cout << "The equation has exactly one unique root: " << x1;
    }
        else if( b == 0 && c ==0){
        cout << "The equation has infinitely many roots";
    }
        else if(b ==0 && c != 0){
        cout << "The equation has no solution";
    }
    }
    else{

    delta = pow(b, 2) - 4*a*c ;

        if(delta > 0){
        
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);

        cout << "The equation has two distinct real roots\n";
        cout << x1 << '\n';
        cout << x2 << '\n';
    }
        else if(delta == 0){
        
        x1 = x2 = -b/ (2*a);
        
        cout << "The equation has a repeated root\n";
        cout << x1;
    }
        else{
        cout << "The equation has no real roots\n";
    }
    }

    return 0;
}