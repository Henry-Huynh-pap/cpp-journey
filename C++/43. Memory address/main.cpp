#include <iostream>
int main () {

    std::string name = "Henry";
    int age = 20;
    bool student = true;

    std::cout << &name << '\n';
    std::cout << &age << '\n';
    std::cout << &student;

    return 0;
}