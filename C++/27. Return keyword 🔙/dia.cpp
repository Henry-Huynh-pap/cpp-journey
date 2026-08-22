#include <iostream>

std::string combinename (std::string name1, std::string name2);

int main () {

    std::string Firstname;
    std::string Lastname;

    std::cout << "Enter your first name: ";
    std::cin >> Firstname;

    std::cout << "Enter your last name: ";
    std::cin >> Lastname;

    std::string Fullname = combinename(Firstname,Lastname);

    std::cout << "Hello " << Fullname;


    return 0;
}

std::string combinename (std::string name1, std::string name2){
    return name1 + " " + name2;
}