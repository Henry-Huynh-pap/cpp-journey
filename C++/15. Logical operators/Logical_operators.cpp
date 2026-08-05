#include <iostream>
int main () {

    int temp;
    bool sunny = false;

    std::cout << "Enter your temperature: ";
    std::cin >> temp;

    
    if (temp > 0 && temp < 30) {
        std::cout << "The temperature is good";
    }
    else {
        std::cout <<"The temperature is not good";
    }
    

    
    if (temp <= 0 || temp >= 30) {
        std::cout << "The temperature is bad \n";
    }
    else {
        std::cout <<"The temperature is good \n" ;
    }
    

    if (!sunny) {
        std::cout << "There is cloudy oudise";
    }
    else {
        std::cout << "There is sunny outside";
    }

    return 0;
}