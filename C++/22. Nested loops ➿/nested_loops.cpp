#include <iostream>
int main() {

    /*
    for(int i = 1; i <=20; i+=1){
        std::cout << i << ' ';
    }
    */

    int rows;
    int colums;
    char symbol;

    std::cout << "Enter your rows: " ;
    std::cin >> rows;

    std::cout << "Enter your colums: ";
    std::cin >> colums;

    std::cout << "Enter your symbol: ";
    std::cin >> symbol;


    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <=colums; j++){
        std::cout << symbol ;
        }
        std::cout << '\n';
    }


    return 0;
}