#include <iostream>
using namespace std;

int main(){

    double height = 0;
    double width = 0;
    double c = 0;
    double d = 0;

    cout << "Enter the height of the rectangle : " ;
    cin >> height;

    cout << "Enter the width of the rectangle : " ;
    cin >> width;

    c = (height + width)*2;
    d = height * width;

    cout << "The perimeter of the rectangle is : " << c <<'\n';
    cout << "The area of the rectangle is : " << d << '\n';

    return 0;
}