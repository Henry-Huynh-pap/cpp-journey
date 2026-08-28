#include <iostream>
int main () {

    char alphabet [] = {'a' ,'b', 'c', 'd', 'e', 'f', 'g'};

    for ( int i = 0; i < sizeof(alphabet)/sizeof(char); i++){
          std::cout << alphabet[i] << '\n';
    }

    return 0;
}