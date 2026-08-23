#include <iostream>

std::string name = "House";

void myname () ;

int main () {

    std::string name = "King";
    
    myname();
    std::cout <<  name << '\n';
    //std::cout << :: name << '\n';

    return 0;
}

void myname () {
    std::string name = "Henry";
    std::cout << :: name << '\n';
}