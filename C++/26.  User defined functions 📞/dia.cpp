#include <iostream>

void Reminder (std::string name, int age);

int main () {

    std::string name = "Henry";
    int age = 20;

    Reminder (name,age);
    
    return 0;
}

void Reminder (std::string name, int age) {
    std::cout << "At 8 A.M studing code " << name <<'\n';
    std::cout << "At 9.50 A.M studing language " << name << '\n';
    std::cout << "At 1.30 PM praticing speaking and writing " << name <<'\n';
    std::cout << "At 7.30 PM review Anki " << name << '\n';
    std::cout << "You are " << age << " not having so much times";
}