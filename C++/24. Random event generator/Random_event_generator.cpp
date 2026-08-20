#include <iostream>
#include <ctime>
int main () {

    srand(time(0));
    int randnum5 = rand() % 5 + 1;

    switch (randnum5) {
        case 1 : std:: cout << "Good luck next turn";
        break;
        case 2 : std:: cout << "Nothing";
        break;
        case 3 : std:: cout << "Pray your god";
        break;
        case 4 : std:: cout << "Still nothing";
        break;
        case 5 : std:: cout << "Happy happy";
        break;
    }

    return 0;
}