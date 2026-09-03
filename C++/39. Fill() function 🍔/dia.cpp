#include <iostream>
int main() {

    const int Number = 99;
    std::string forests [Number];

    fill(forests, forests + Number/3, "Cuc phuong");
    fill(forests + Number/3, forests + Number/3*2, "Son tra");
    fill(forests + Number/3*2, forests + Number/3*3, "Bach ma");

    for(std::string forest:forests){
        std::cout << forest << '\n';
    }

    return 0;
}