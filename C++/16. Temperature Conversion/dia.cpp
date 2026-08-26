#include <iostream>
int main () {
    
    char unit;
    double temp;

    std::cout << "******Temperature Conversion******\n";
    std::cout << "Please choose the temperature unit you want to convert\n";
    std::cout << "Fahrenheit is: F\n";
    std::cout << "Celsius is: C\n";
    std::cout << "The unit I want to choose is: ";
    std::cin >> unit;

    if (unit == 'c' || unit == 'C') {
        std::cout << "Enter the value of C: ";
        std::cin >> temp;

        temp = (temp * 5/9 ) +32;

        std::cout << "The value of F is: " << temp;
    }
    else if(unit =='f' || unit == 'F') {
        std::cout << "Enter the value of F: ";
        std::cin >> temp;
    
        temp = (temp -32 ) * 5/9;
        
        std::cout << "The value of C is: " << temp;
    }
    else {
        std::cout << "Enter the correct unit of the conversion";
    }
    return 0;
}