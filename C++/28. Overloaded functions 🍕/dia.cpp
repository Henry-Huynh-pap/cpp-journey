#include <iostream>

void pizza();
void pizza(std::string pizza1);
void pizza(std::string pizza1,std::string pizza2);

int main () {

    //pizza();
    //pizza("beef");
    pizza("beef", "salad");

    return 0;
}

void pizza(){
    std::cout << "Here is your pizza";
}
void pizza(std::string pizza1){
    std::cout << "Here is your " << pizza1 << " pizza";
}
void pizza(std::string pizza1,std::string pizza2){
    std::cout << "Here is your " << pizza1 << " and " << pizza2 << " pizza";
}