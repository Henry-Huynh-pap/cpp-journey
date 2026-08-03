#include <iostream>
int main () {

    double a;

    std::cout << "Please enter your age: ";
    std::cin >> a;
    if ( a>= 100) {
        std::cout << "Are you real ?";
    }
    else if ( a >= 18 ){
        std::cout << "You can pay tax right now: " << a;
    }
    else if ( a <= 0){
        std::cout << "You were not born";
    }
    else {
        std::cout << "You aren't old enough ";
    }

    return 0;
}