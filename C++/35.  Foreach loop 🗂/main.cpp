#include <iostream>
int main () {

    char grades [] = {'A', 'B', 'C', 'D', 'E', 'F'};
    std::string beverages [] = {"Cola", "Pepsi", "Sprite", "Mirinda"};

    for(char grade : grades){
        std::cout << grade  << '\n';
    }

    for (std::string beverage : beverages) {
        std::cout << beverage << '\n';
    }

    return 0;
}