#include <iostream>

int searchArray(std::string array [], int size, std::string yourChoice);

int main () {

    std::string myfood[] = {"fried chicken","soup","chupy chupy"};
    int size = sizeof(myfood)/sizeof(myfood[0]);
    std::string yourChoice;
    
    std::cout << "Type your choice for finding your food: ";
    getline(std::cin, yourChoice);

    int index = searchArray(myfood,  size,  yourChoice);

    if ( index != -1){
        std::cout << "Your index number is: " << index;
    }
    else {
        std::cout << "It's not available in your choice of food";
    }

    return 0;
}
int searchArray(std::string array [], int size, std::string yourChoice){
    for (int i =0; i < size; i++){
        if( array [i] == yourChoice){
            return i;
        }
    }
    return -1;
}