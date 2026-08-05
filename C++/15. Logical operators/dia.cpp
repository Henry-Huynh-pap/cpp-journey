#include <iostream>
int main() {

    //&&
    // ||
    // !

    int temp;
    bool sunny = false;

    std::cout << "Please enter your temperature: ";
    std::cin >> temp;

    //temp >=0 && temp <= 30 ? std::cout << "Your temperature is good" :  std::cout << "Your temperature is not good";
   /* if (temp >=0 && temp <= 30) {
        std::cout << "The temperature is good";
    }
    else {
        std::cout << "The temperature is not good";
    }   */

    if (temp <=0 || temp >= 30){
        std::cout << "The temperature is bad\n";
    }
    else {
        std::cout << "The temperature is good\n";
    }

    if (!sunny) {
        std::cout << "There is cloudy outside";
    }
    else {
        std::cout << "There is sunny outside";
    }
    return 0;


}