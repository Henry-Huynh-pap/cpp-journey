#include <iostream>
int main() {
    std::string name;
    int age;

    std::cout << "what's your age ?: ";
    std::cin >> age;

    std::cout << "what's your full name ?: ";
    std::getline(std::cin >> std::ws , name) ;

    std::cout << " Hello " << name << '\n';
    std::cout << " You are " << age << " years old";
}