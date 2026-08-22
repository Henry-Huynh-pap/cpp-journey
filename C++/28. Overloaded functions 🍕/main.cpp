#include <iostream>

void Pizza ();
void Pizza (std::string pizza1);
void Pizza (std::string pizza1, std::string pizza2) ;

int main () {

    //Pizza ();
    //Pizza ("beef");
    Pizza ("beef","salad");


    return 0;
}

void Pizza () {
    std::cout << "Here is your pizza";
}
void Pizza (std::string pizza1) {
    std::cout << "Here is your " << pizza1 << " pizza";
}
void Pizza (std::string pizza1, std::string pizza2) {
    std::cout << "Here is your " << pizza1 << " pizza" << " and " << pizza2 << " pizza";
}