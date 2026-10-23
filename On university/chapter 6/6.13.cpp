#include <iostream>
#include <algorithm>
using namespace std;

void swapNum(int a, int b);

int main(){

    int a = 8;
    int b = 4;

    swap(a,b);

    cout << a << " " << b;

    return 0;
}

void swapNum(int a, int b){

    int result = 0;

    swap(a,b);
}