#include <iostream>

typedef std::string text_t;
typedef int A;

int main() {
    text_t bro = "hehehe";
    A age = 19;

    std::cout << bro << '\n';
    std::cout << age << '\n';


}


using text_t = std::string;
using number = int;

int main () {
    text_t bro = "heheheh";
    number G  = 19;

    std::cout << bro << '\n';
    std::cout << G << '\n';

}
