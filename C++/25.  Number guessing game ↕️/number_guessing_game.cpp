#include <iostream>
#include <ctime>
int main (){

    int num;
    int guess;
    int tries = 0;

    srand(time(0));
    num = rand() % 100 + 1;
    
    std::cout << "******NUMBER GUESSING GAME******\n";

    do{
        std::cout << "Enter the number you guess: ";
        std::cin >> guess;
        tries++;

        if(guess > num){
            std:: cout << "Too high\n";
        }
        else if (guess < num){
            std::cout << "Too low\n";
        }
        else{
            std::cout << "The correct of tries is: "<< tries <<'\n';
        }
    }while (guess != num);

    std::cout << "**************";

    return 0;
}