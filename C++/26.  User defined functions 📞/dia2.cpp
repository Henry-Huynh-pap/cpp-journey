#include <iostream>

void Time (std::string name, int age);

int main () {

    std::string name = "Henry";
    int age = 20;

    Time(name,age);

    return 0;
}

void Time (std::string name, int age){
    std::cout << "Not young anymore " << name << '\n';
    std::cout << "7 years left " << name << '\n';
    std::cout << "4 years in the new chapter " << name << '\n';
    std::cout << "MUSR TRY YOUR BEST " << name << '\n';
    std::cout << "You are " << age << " years old needing to spend time better";
}