#include <iostream>
#include <string>
using namespace std;
int main(){

    string n;

    cout << "Enter a number: ";
    getline(cin ,n);

    for(int i = 0;  i < n.length() ;i++){
        switch(n[i]){
        case '1' : 
            cout << "one ";
            break;
        case '2' : 
            cout << "two ";
            break;
        case '3' : 
            cout << "three ";
            break;
        case '4' : 
            cout << "four ";
            break;
        case '5' : 
            cout << "five ";
            break;
        case '6' : 
            cout << "six ";
            break;
        case '7' : 
            cout << "seven ";
            break;
        case '8' : 
            cout << "eight ";
            break; 
        case '9' : 
            cout << "nine ";
            break;
        default:
            cout << "'" << n[i] << " is not a digit" << "' " ;
            break;                     
        }
    }
    
    return 0;
}