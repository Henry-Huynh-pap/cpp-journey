#include <iostream>
using namespace std;

int findNum(int n, int m);

int main(){

    int n,m, result;

    cout << "\nEnter a number in range from n to m\n";
    cout << "Enter a n number: ";
    cin >> n;
    cout << "Enter a m number: ";
    cin >> m;

    if( n < m){
        result = findNum(n,m);

        cout << result;
    }
    else{
        cout << "F";
    }

    return 0;
}

int findNum(int n, int m){
    
    int a,b, i, numToFind;

    int maxSum = 0;

    for(i = n; i <= m; i++){
        a = 0;
        b = i;

        while(!(b <= 0)){
            a = a + b % 10;
            b = b / 10;
        }

        if(a >= maxSum){
            maxSum = a;
            numToFind = i;
        }

    }

    return numToFind;
}