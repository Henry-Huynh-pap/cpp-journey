#include <iostream>
using namespace std;

int candies(int a, int b, int c);

int main(){

    int result = candies(4,5,10);

    cout << result;

    return 0;
}

int candies(int a, int b, int c){

    int n = a*2;
    int m = b * 5;
   
    if( (c-m) % 2 == 0 && c == (n+m)){

        cout << "Required number of small parcel = ";

    
        return (c-m) / 2;
    }
    else{

        cout << "You cannot make any combination to reach ";

        return -1;
    } 
    
}