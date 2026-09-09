#include <iostream>
int main () {

    std::string questions [] = {"1. Where is Viet Nam ?",
                                "2. Which food we eat every day ?",
                                "3. What is the most vehicle everyone has ?",
                                "4. Do you love viet Nam ?"};

    std::string options [][4] = {{"A. In Europe", "B. In Africa", "C. In North America", "D. In Southeast Asia"},
                                {"A. Rice", "B. Pho", "C. Bread", "D. Oat"},
                                {"A. Car", "B. Scooter", "C. Motorbike", "D. Helicopter" },
                                {"A. No", "B. Yah", "C. Absolutely", "D. Nah Nah"}};

    char answer [] = {'D','A','B','C'};

    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score = 0;

    for(int i = 0; i < size; i++ ){
        std::cout << questions[i] << '\n';
        
        for(int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++){
            std::cout << options [i][j] << '\n';
        }

        std::cout << "Enter your question: ";
        std::cin >> guess;
        guess = toupper(guess);

        if(guess == answer [i]){
            std::cout << "Correct" << '\n';
            score++;
        }
        else{
            std::cout << "Wrong" << '\n';
        }
    }
    
    std::cout << "Your correct answer is: " << score << '\n';
    std::cout << "The total of question is: " << size;
    
    
    return 0;
}