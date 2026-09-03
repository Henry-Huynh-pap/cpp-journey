#include <iostream>
int main () {

    std::string car[5];
    int size = sizeof(car)/sizeof(car[0]);
    std::string temp;

    for(int i = 0; i < size ; i++){
        std::cout << "Please enter the 'q' to quit or typing your car #" << i + 1 << " : ";
        getline( std::cin, temp);
        if(temp == "q"){
            break;
        }
        else{
            car[i] = temp;
        }
    }

    std::cout << "Here is your following cars" << '\n';

    for(int i = 0; !car[i].empty(); i++ ){
        std::cout << car[i] << '\n';
    }

    return 0;
}