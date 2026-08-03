#include <iostream>
int main () {

    char grade;
    std::cout << "Please enter your grade: ";
    std::cin >> grade;

    switch (grade) {
        case 'A':
            std::cout << "You did excellent";
            break;
        case 'B':
            std::cout << "You did good";
            break;
        case 'C':
            std::cout << "You did okay";
            break;
        case 'D':
            std::cout << "You aren't good";
            break;
        case 'F':
            std::cout << "You failed";
            break;
        default:
            std::cout << "Please enter the correct number";
            break;
    }


    return 0;
}