#include <iostream>
int main() {

    std::string questions [] = {{"1. Where is Japan ?"},
                               {"2. Is the Honda form Japan ?"},
                               {"3.Is Hawai form Japan ?"},
                               {"4. Do you like Japanese girls ?"}}; 
    
    std::string options [][4] = {{"A. In Asia", "B. In Europe" ,"C. In South Africa", "D. In the US"},
                                {"A. Absolutely", "B. No", "C. Maybe", "D. I don't know"},
                                {"A. Are you crazy ?", "B. whatever", "C. Why do u ask this question ?", "D.Yes"},
                                {"A. I love them", "B. I need time to understand them", "C. Nah", "D. I don't care"}};

    char answer [] = {'A','A','A','B'};
    int size = sizeof(questions)/sizeof(questions [0]);
    char guess;
    int score = 0;

    for(int i = 0; i < size; i++){
        std::cout << questions[i] << '\n';
        for(int j = 0; j < sizeof(options[i])/sizeof(options[i][j]);j++){
            std::cout << options [i][j] << '\n';
        }

        std::cout << "Type your choice: ";
        std::cin >> guess;
        guess = toupper( guess);

        if( guess == answer [i]){
            std::cout << "Correct" << '\n';
            score++;
        }
        else{
            std::cout << "Wrong" << '\n';
        }
    }

    std::cout << "The number of correct answer is: " << score << '\n';
    std::cout << "The number of questions is: " << size << '\n';

    return 0;
}