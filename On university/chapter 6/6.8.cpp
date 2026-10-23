#include <iostream>
using namespace std;

int decs(int a);
int asc(int a);

int main(){

    cout << decs(1543) << '\n';
    cout << asc(9876);

    return 0;
}

int decs(int a){
    
    int num[4];
    int i, j, z, temp, b;
    int result = 0;

    for(i = 0; i < sizeof(num)/sizeof(0) ;i++){

        b = a % 10;
        a = a / 10;
        
        num[i] = b;
}

    for(j = 0; j < sizeof(num)/sizeof(0);j++){
        for(z = 0; z < sizeof(num)/sizeof(0) - 1; z++){
            if( num[z] < num[z+1]){
                temp = num[z + 1];
                num[z+1] = num[z];
                num [z] = temp;
            }
        }
    }

    for(int z = 0; z < sizeof(num)/sizeof(0); z++){
        result = result * 10 + num[z];
    }

    return result;
}

int asc(int a){
    
    int num[4];
    int i, j, z, temp, b;
    int result = 0;

    for(i = 0; i < sizeof(num)/sizeof(0) ;i++){

        b = a % 10;
        a = a / 10;
        
        num[i] = b;
}

    for(j = 0; j < sizeof(num)/sizeof(0);j++){
        for(z = 0; z < sizeof(num)/sizeof(0) - 1; z++){
            if( num[z] > num[z+1]){
                temp = num[z + 1];
                num[z+1] = num[z];
                num [z] = temp;
            }
        }
    }

    for(int z = 0; z < sizeof(num)/sizeof(0); z++){
        result = result * 10 + num[z];
    }

    return result;
}
