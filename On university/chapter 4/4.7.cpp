#include <iostream>
using namespace std;
int main(){

    double convert, usd;
    int currency;

    cout << "Select which currency from those contries you want to convert: \n";
    cout << "1.EUR\n";
    cout << "2.JPY\n";
    cout << "3.GBP\n";
    cout << "4.VND\n";
    
    cout << "Enter the number before the currency to make a choice: ";
    cin >> currency;
    
    cout << "Enter the amount of USD you want to convert: ";
    cin >> usd;

    switch(currency){
        case 1 :
            convert = usd*0.88;
            cout << "The amount of the Euro is: " << convert;
            break;
        case 2 : 
            convert = usd*157;
            cout << "The amount of the Japanese Yen is: " << convert;
            break;
        case 3 : 
            convert = usd*0.75;
            cout << "The amount of the British Pound is: " << convert;
            break;
        case 4 : 
            convert = usd*25.97;
            cout << "The amount of the Vietnamese Dong is: " << convert;
            break;   
        default:
            cout << "Invalid value";
    }

    return 0;
}