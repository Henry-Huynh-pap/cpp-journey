#include <iostream>
#include <string>

int main () {

    std::string scooter [][3] = {{"honda","Wave Alpha","Vision"},
                                {"Yamaha","Sirius","Janus"},
                                {"Piaggio","Liberty","Sprint"}};
    
    std::cout << scooter[0][0] << " " ;                           
    std::cout << scooter[0][1] << " " ; 
    std::cout << scooter[0][2] << " " << '\n'; 
    std::cout << scooter[1][0] << " " ;
    std::cout << scooter[1][1] << " " ;
    std::cout << scooter[1][2] << " "  << '\n';
    std::cout << scooter[2][0] << " " ;
    std::cout << scooter[2][1] << " " ;
    std::cout << scooter[2][2] << " "  << '\n';

    return 0;
}