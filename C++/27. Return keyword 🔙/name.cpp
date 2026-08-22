#include <iostream>

std::string Combinename (std::string name1,std::string name2 );

int main () {

    std::string Firstname = "Henry";
    std::string Lastname = "Huynh";
    std::string Fullname = Combinename (Firstname, Lastname);
    
    std::cout << "Hello " << Fullname;

    return 0;
}

std::string Combinename (std::string name1,std::string name2 ) {
    return name1 + " " + name2;
}