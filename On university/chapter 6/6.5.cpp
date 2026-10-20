#include <iostream>
#include <cmath>
using namespace std;

int derivative(int x, int y);

int main(){

    int x,y,result;

    cout << "\nEnter the x: ";
    cin >> x;
    cout << "Enter the y: ";
    cin >> y;

    result = derivative(x,y);

    cout << result;

    return 0;
}

int derivative(int x, int y){
    return y * pow(x,(y-1));
}

