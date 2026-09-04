#include <iostream>
int main () {

    std::string scooter [][3] = {{"Suzuki","Raider R150","V-Strom 250SX"},
                                {"VinFast","Feliz S","Vento S"},
                                {"Honda","Air Blade","SH Mode"}};

    int rows = sizeof(scooter)/sizeof(scooter[0]);                            
    int colums = sizeof(scooter[0])/sizeof(scooter[0][0]);  

    for(int i = 0; i < rows; i++){
        for(int j =0; j < colums; j++){
            std::cout << scooter[i][j] << " ";
        }
        std::cout << '\n';
    }

    return 0;
}