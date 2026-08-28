#include <iostream>
int main () {

    std::string name [] = {"Panda", "Brown", "Ice bear", "Kungfu panda"};
    char grades [] = {'A', 'B', 'C', 'D', 'E', 'F'};

    for ( int i= 0; i < sizeof(name)/sizeof(std::string) ; i++ ){
            std::cout << name [i] <<'\n';
    }

    for ( int e = 0; e < sizeof(grades) / sizeof(char); e++) {
            std::cout << grades [e] << '\n';
    }

    return 0;
}