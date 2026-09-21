#include <iostream>
#include <string>
using namespace std;

int main(){

    //exam scores
    int a,b,c;

    //middle exam scores
    double d;

    //final exam scores
    int e;

    cout << "Nhap diem kiem tra 1: ";
    cin >> a;
    cout << "Nhap diem kiem tra 2: ";
    cin >> b;
    cout << "Nhap diem kiem tra 3: ";
    cin >> c; 
    cout << "Nhap diem thi giua ky: ";
    cin >> d;
    cout << "Nhap diem thi cuoi ky: ";
    cin >> e;

    cout << '\n';
    cout << "==========Diem kiem tra==============\n";
    cout << "\n";
    cout << "Nhap diem kiem tra 1: " << a << '\n';
    cout << "Nhap diem kiem tra 2: " << b << '\n';
    cout << "Nhap diem kiem tra 3: " << c << '\n';
    cout << '\n';
    cout << "==========Diem thi giua ky==============\n";
    cout << "\n";
    cout << "Nhap diem thi giua ky: " << d << '\n';
    cout << '\n';
    cout << "==========Diem thi cuoi ky==============\n";
    cout << "\n";
    cout << "Nhap diem thi cuoi ky: " << e << '\n';
    cout << "Tong diem kiem tra: " << a + b + c  << '\n';
    cout << "Diem thi giua ky: " << d << '\n';
    cout << "Diem thi cuoi ky: " << e << '\n';
    cout << '\n';
    cout << "....................";

    return 0;
}