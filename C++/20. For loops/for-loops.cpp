#include <iostream>
int main () {
    /*
    for(int i =1; i <=10; i++){
        std::cout << "Happy new years\n";
    }
    */

    for( int i=10; i >=0; i-=2){
        std::cout << i << '\n';
    }
    std::cout << "Happy new year";

    return 0;
}