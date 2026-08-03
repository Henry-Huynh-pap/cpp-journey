#include <iostream>
int main () {

    double pi = (int) 3.14;
    std::cout << pi << '\n';
    
    
    char A = 100;
    std::cout << A << '\n';
    std::cout << (char)100 << '\n';

    int correct = 8;
    int questions = 10;
    int score = (double) correct/questions * 100;
    std::cout << score << '%';
}