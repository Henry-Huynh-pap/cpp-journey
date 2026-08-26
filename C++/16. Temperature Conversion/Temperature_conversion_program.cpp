#include <iostream>
int main () {
    char unit;
    double temp;

    std::cout << "*****Temperature conversion*****\n";
    std::cout << "Please choose your unit\n";
    std::cout << "Fahrenheit: F \n";
    std::cout << "Celcius: C \n";
    std::cout << "The unit I chose is: ";
    std::cin >> unit;

    if(unit == 'F' || unit == 'f'){
        std::cout << "Please enter the value of F: ";
        std::cin >> temp;

        temp = (temp -32)*5/9;

        std::cout << "The value of C is: " << temp; 
    }
    else if (unit == 'C' || unit == 'c'){
        std::cout << "Please enter the value of C: ";
        std::cin >> temp;

        temp = (temp*9/5)+32;

        std::cout <<"The value of F is: " << temp;
    }
    else {
        std::cout << "Please enter the correct value of conversion";
    }

    return 0;
}

/*if(){

}
else if(){

}
else {

}
*/