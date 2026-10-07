#include <iostream>
#include <cmath>
using namespace std;
int main() {

    bool running  = true;
    int n, m, temp, a, result, i, count;
    char e;


    cout << "*********************\n";
    cout << "*     MENU          *\n";
    cout << "*   1. Armstrong    *\n";
    cout << "*   2. Prime        *\n";
    cout << "*   3. Finish       *\n";
    cout << "*********************\n\n";


    do{       

    cout << "Choose (1,2,3) : ";
    cin >> n;

    switch(n){

        case 1 : 
            
            cout << "Enter a number to check: ";
            cin >> m;

                temp = m;
                result = 0;

                while(m > 0){
                    a = m % 10;
                    result = result + pow(a,3);
                    m = m / 10; 
                }

                if( result == temp){
                    cout << '\n' << temp << " is a Armstrong's number\n";
                }
                else{
                    cout << '\n' << temp << " is not a Armstrong's number\n"; 
                }

            break;
        
        
        case 2 :  
            
            cout << "Enter a number to check: ";
            cin >> m;

            i = 2;
            count = 0;

                while( i <= sqrt(m)){

                    if(m % i == 0){
                        count ++;
                    }
                    i++;
                }

                if(count == 0 && m >1){
                    cout << '\n' << m << " is Prime\n";
                }
                else{
                    cout << "\n" << m << " Not prime\n";
                }

            break;

        case 3 : 
            
            cout << "Do you want to finish (c/k)?";
            cin >> e; 

            if(e == 'c'){
                running = false;
            }
            else{
                continue;
            }

            break;
    }
    }while(running);

    cout << "See you agian !";

    return 0;
}