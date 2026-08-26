#include <iostream>
int main() {

    char op;
    double num1;
    double num2;
    double result;

    std::cout << "*****CALCULATOR*****" << '\n' ;
    std::cout << "Enter your operation: " ;
    std::cin >> op;

    std::cout << "Enter your num1: "  ;
    std::cin >> num1;
    
    std::cout << "Enter your num2: "  ;
    std::cin >> num2;

    switch(op){
        case '+':
            result = num1 + num2;
            std::cout << "The result is: " << result;
        break;
        case '-':
            result = num1 - num2;
            std::cout << "The reults is: " << result;
            break;
        case '*':
            result = num1 * num2;
            std::cout << "The reults is: " << result;
            break;
        case '/':
            result = num1 / num2;
            std::cout << "The result is: " << result;
            break;
        default:
            std::cout << "Please enter the right operation";
        }

        return 0;
    }


