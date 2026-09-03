#include <iostream>
int main () {

    const int number = 99;
    std::string rivers [number] ;

    fill(rivers, rivers + number/3, "Han river");
    fill(rivers + number/3,rivers + number/3*2, "Mekong river");
    fill(rivers + number/3*2,rivers + number/3*3, "Nile river");

    for(std::string river: rivers){
        std::cout << river << '\n';
    }

    return 0;
}