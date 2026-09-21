#include <iostream>
#include <cmath>
using namespace std;

int main(){

    double angle;
    double radian;
    double cotx;
    
    cout << "Enter the angle: ";
    cin >> angle;

    radian = angle * M_PI / 180;
    cotx = cos(radian) / sin(radian);

    cout << "The value of sine is: " << sin(radian) << '\n';
    cout << "The value of cosine is: " << cos(radian) << '\n';
    cout << "The value of tangent is: " << tan(radian) << '\n';
    cout << "The value of cotangent is: " << cotx;

    return 0;
}