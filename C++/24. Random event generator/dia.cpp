#include <iostream>
#include <ctime>
int main () {

    srand(time(0));
    int Randnum5 = rand() % 6 + 1;

    switch (Randnum5) {
        case 1 : std::cout << "Nothing";
        break;
        case 2 : std::cout << "Stil nothing";
        break;
        case 3 : std::cout << "Pray";
        break;
        case 4 : std::cout << "HEHEHEH";
        break;
        case 5 : std::cout << "Happy";
        break;
    }

    return 0;
}