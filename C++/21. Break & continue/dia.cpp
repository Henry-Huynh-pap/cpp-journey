#include <iostream>
int main () {
    
    /*
    for(int i = 20; i >=0 ; i-- ){
        if (i == 14){
            break;
        }
        std::cout << i << '\n';
    }
    */

    for(int i = 30; i >=0; i-=2){
        if( i == 10){
            continue;
        }
        std::cout << i << '\n';
    }

    return 0;
}