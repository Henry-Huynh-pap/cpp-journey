#include <bits/stdc++.h>
using namespace std;

int candies(int a, int b, int c);

int main(){

    int result = candies(1,1,7);

    if(result == -1){
        cout << "You cannot make any combination to reach " << result;
    }
    else{
        cout << "Required number of small candies = " << result;
    }

    return 0;
}

int candies(int smallParcel, int bigParcel, int totalParcel){

    int bigNeeded = min(bigParcel,totalParcel / 5);

    int remaining = totalParcel - bigNeeded*5;

    if(remaining % 2 != 0){
        return -1;
    }

    int smallNeeded = remaining / 2;

    if(smallNeeded > smallParcel){
        return -1;
    }

    return smallNeeded;
    
}
