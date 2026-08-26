#include <iostream>
#include <ctime>

char getUserChoice ();
char getComputerChoice ();
void showChoice (char choice);
void showWinner (char player, char computer);

int main () {

    char player;
    char computer;

    player = getUserChoice ();
    std::cout << "Your choice is: "  ;
    showChoice(player);

    computer = getComputerChoice ();
    std::cout << "Computer choice is: " ;
    showChoice(computer);

    showWinner (player, computer);

    return 0;
}

char getUserChoice (){
    
    char player;
    std::cout << "Please enter your choice of RPS game\n";

    do {
        std::cout << "************\n";
        std::cout << "'r'. rock choice\n";
        std::cout << "'p'. paper choice\n";
        std::cout << "'s'. scissors choice\n";
        std::cout << "My choice is: ";
        std::cin >> player;
    }while (player != 'r' && player != 'p' && player != 's');

    return player;
}
char getComputerChoice (){
    
    int num;

    srand(time(0));
    num = rand() % 3 + 1;

    switch (num) {
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }

    return 0;
}
void showChoice (char choice){

    switch (choice) {
        case 'r': std::cout << "Rock\n";
        break;
        case 'p': std::cout << "Papper\n";
        break;
        case 's': std::cout << "Scissors\n";
        break;
    }
}
void showWinner (char player, char computer){
    switch(player) {
        case 'r' : if(computer == 'r'){
                        std::cout << "You've tied";
                    }
                    else if (computer == 'p') {
                        std::cout << "You've lost";
                    }
                    else {
                        std::cout << "You've won";
                    }
                    break;
        case 'p' : if(computer == 'r'){
                        std::cout << "You've won";
                    }
                    else if (computer == 'p') {
                        std::cout << "You've tied";
                    }
                    else {
                        std::cout << "You've lost";
                    }
                    break;
        case 's' : if(computer == 'r'){
                        std::cout << "You've lost";
                    }
                    else if (computer == 'p') {
                        std::cout << "You've won";
                    }
                    else {
                        std::cout << "You've tied";
                    }
                    break;            
    }
}