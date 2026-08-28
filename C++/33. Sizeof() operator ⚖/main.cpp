#include <iostream>
int main () {

    char grade = 'A';
    std::string name = "Henry";
    char grades [] = {'A', 'B', 'C', 'D'};
    std::string names [] = {"Panda", "Brown", "Ice bear"};

    std::cout << sizeof(grade) << " bytes\n";
    std::cout << sizeof(name) << " bytes\n";
    std::cout << sizeof(grades) << " bytes\n";
    std::cout << sizeof(grades) / sizeof(char) << " elements\n";
    std::cout << sizeof(names) / sizeof(std::string) << " elements\n";

    return 0;
}