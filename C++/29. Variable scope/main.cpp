#include <iostream>

int mynum = 3;

void name();

int main () {

    int mynum = 1;

    name();
    std::cout << :: mynum << '\n';

    return 0;
}

void name() {
    int mynum = 2;
    std::cout << :: mynum << '\n';
}