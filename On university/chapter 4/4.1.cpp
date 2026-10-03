#include <iostream>
using namespace std;

int main(){
    int number;

    cout << "ENter an integer: ";
    cin >> number;

    // checks if the number is psositive
    if(number >0){
        cout << "You entered a positive integer: " << number << endl;
    }
    cout << "This satement is always executed.";
    return 0;
}
