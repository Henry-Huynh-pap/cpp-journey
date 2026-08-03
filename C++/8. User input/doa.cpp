#include <iostream>
int main () { 

    std::string name;
    int age;

    std::cout << "What's your age ? : " ;
    std::cin >> age;

    std::cout << "What's your full name ? : " ;
    getline(std::cin >> std::ws, name);

    std::cout << "Hello " << name << '\n';
    std::cout << "Your name is " << age;

    return 0;
}