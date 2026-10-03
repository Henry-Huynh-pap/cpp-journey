#include <iostream>
using namespace std;
int main(){

    char c;

    cout << "Enter a charater to check: ";
    cin >> c;

    if(c >= 0 && c <=9){
        cout << "D";
    }
    else if(c >= 'a' && c <= 'z'){
        cout << "A";
    }
    else if(c >= 'A' && c <= 'Z'){
        cout << "A";
    }
    else{
        cout << "S";
    }

    return 0;
}