#include <iostream>
int main () {

    /*
    for( int i=1; i <=20; i++){
        if(i == 13){
            break;
        }
        std::cout << i << '\n';
    }
    */

    for(int i = 1; i<=30; i+=2 ){
        if( i == 17){
            continue;
        }
        std::cout << i << '\n';
    }


    return 0;
}