#include <bits/stdc++.h>

using namespace std;

int add(int num1,int num2);
float add(float num1, float num2);
double add(double num1, double num2);

int main(){

    cout << "Sum int: " << add(25,50) << '\n';
    cout << "Sum float: " << add(12.65,116.50) << '\n';
    cout << "Sum double: " << add(1234.567,2468.357);

    return 0;
}

int add(int num1,int num2){
    return num1 + num2;
}

float add(float num1, float num2){
    return num1 + num2;
}

double add(double num1, double num2){
    return num1 + num2;
}