#include <iostream>

namespace first {
    int x = 1;
}

namespace Second {
    int x = 2;
}

int main () {
    
    std::cout << Second::x << '\n';
    std::cout << first::x;

}

int main () {
    using std::string;
    using std::cout;

    string name = "hehehe";
    cout << name;
}