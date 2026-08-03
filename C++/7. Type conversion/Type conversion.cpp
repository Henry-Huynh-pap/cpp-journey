#include <iostream>
int main () {

    //int x = (double) 3.14;
    //char x = 100;
    //std::cout << x;
    //std::cout << (char)100; 

    int correct = 8;
    int questions = 10;
    double score = correct/ (double) questions * 100;

    std::cout << score << "%";

}