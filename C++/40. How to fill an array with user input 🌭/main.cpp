#include <iostream>
int main () {

    std::string beverage [5];
    int size = sizeof(beverage)/sizeof(beverage[0]);
    std::string temp;

    for(int i = 0; i < size; i++){
        std::cout << "Please enter the 'q' to quit or enter your beverage #" << i + 1 << " : ";
        getline(std::cin, temp);
        if(temp == "q"){
            break;
        }
        else{
            beverage[i] = temp;
        }
    }

    for(int i = 0; !beverage[i].empty(); i++){
        std::cout << "Here is your beverage: " << beverage[i] << '\n';
    }

    return 0;
}