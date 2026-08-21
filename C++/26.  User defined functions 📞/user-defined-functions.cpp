#include <iostream>

 void Alarm(std::string name, int age) {
        std::cout << "Do your homework now " << name << '\n';
        std::cout << "Look back in yourself " << name << '\n';
        std::cout << "I'm disapointed in you " << name << '\n';
        std::cout << "Let's back to your work " << name << '\n' ; 
        std::cout << "You age is " << age << " not young anymore" << '\n' << '\n';
    }

int main () {

    std::string name = "Henry";
    int age = 20;


    Alarm( name, age);
    Alarm( name, age);
    
    return 0;
}