#include <iostream>
int main() {

    std::string name;

    while(name.empty()){
        std::cout << "Please enter your name: ";
        getline(std::cin, name);
    }

    std::cout << "Welome " << name;
    
    return 0;
}