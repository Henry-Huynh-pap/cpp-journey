#include <iostream>
#include <string>

using namespace std;

int main(){

    string fullName;

    cout << "Enter your full name: ";
    getline(cin,fullName);

    cout << "The length of the name is: " << fullName.length();

    return 0;
}