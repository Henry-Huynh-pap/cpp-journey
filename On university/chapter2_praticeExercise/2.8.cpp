#include <iostream>
using namespace std;

int main (){

    int days = 0;
    int months = 0;
    int years = 0;
    int temp = 0;

    cout << "Enter the days : ";
    cin >> temp;

    years = temp / 365;
    months = (temp % 365) / 30;
    days = (temp % 365) % 30;

    cout << "The years is : " << years << '\n';
    cout << "The months is : "  << months << '\n';
    cout << "The days is : "  << days;

    return 0;
}