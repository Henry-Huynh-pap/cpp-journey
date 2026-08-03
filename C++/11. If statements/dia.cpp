#include <iostream>

int main() {

    double a;

    std::cout << "Enter your age: ";
    std::cin >> a;

    if ( a >= 100) {
        std::cout << "Are you real";
    }
    else if( a >=18 ) {
        std::cout << "You can pay tax right now";
    }
    else if ( a<=0) {
        std::cout << "You were not born";
    }
    else { 
        std::cout << "You are not old enough";
    }

    return 0;
}
