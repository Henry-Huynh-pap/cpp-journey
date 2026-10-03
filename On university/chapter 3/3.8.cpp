#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){

    double angle;
    double radian;
    double cotx;
    
    cout << "Enter the degree of an angle: ";
    cin >> angle;

    radian = angle * M_PI / 180;
    cotx = cos(radian) / sin(radian);

    cout << "The value of sine is: " << fixed << setprecision(2) << sin(radian) << '\n';
    cout << "The value of cosine is: "<< fixed << setprecision(2) << cos(radian) << '\n';
    cout << "The value of tangent is: " << fixed << setprecision(2)<< tan(radian) << '\n';
    cout << "The value of cotangent is: "<< fixed << setprecision(2) << cotx;

    return 0;
}