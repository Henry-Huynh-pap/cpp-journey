#include <iostream>
int main(){

    int number;

    do{
        std::cout << "Please enter the positive integer: ";
        std::cin >> number;
    }while(number < 0);

    std::cout << "The value is " << number;

    return 0;
}
