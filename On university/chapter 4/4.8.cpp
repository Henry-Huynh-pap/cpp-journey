#include <iostream>
using namespace std;
int main(){

    double quiz, midTerm, final, gpa;

    cout << "Enter the quiz score: ";
    cin >> quiz;

    cout << "Enter the mid-term score: ";
    cin >> midTerm;

    cout << "Enter the final score: ";
    cin >> final;

    gpa = 0.2 * quiz + 0.3 * midTerm + 0.5 * final;

    if(gpa >= 8.5){
        cout << "grade A";
    }
    else if(gpa >= 7.0 && gpa <8.5){
        cout << "grade B";
    }
    else if(gpa >= 5.5 && gpa <7.0){
        cout << "grade C";
    }
    else if(gpa >= 4.0 && gpa <5.5){
        cout << "grade D";
    }
    else{
        cout << "grade F";
    }

    return 0;
}