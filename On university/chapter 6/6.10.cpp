#include <bits/stdc++.h>

using namespace std;

bool isPolydivisible(long num);

int main(){

    long num;

    cout << "Enter a number: ";
    cin >> num;

    if(isPolydivisible(num)){
        cout << num << " is Polydivisible number";
    }
    else{
        cout << num << " is not Polydivisible number"; 
    }

    return 0;
}

bool isPolydivisible(long num){

    if(num <= 0){
        return false;
    }
    
    long prefix = 0;

    string numString = to_string(num);

    for(int i = 0; i < numString.length(); i++){

        prefix = prefix * 10 + numString[i] - '0';
        
        if(prefix % (i+1) != 0){
            return false;
        }
    }

    return true;
}


