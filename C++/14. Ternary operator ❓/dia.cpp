#include <iostream>
int main () {

    bool thirsty = false;
    //thirsty ? std::cout << "I need water" : std::cout << "I don't need water";
    std::cout << (thirsty ? "I need to drink water" : "I don't need to drink water");

    return 0;
}