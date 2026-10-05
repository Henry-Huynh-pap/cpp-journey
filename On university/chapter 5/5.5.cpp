#include <iostream>
using namespace std;
int main(){


    for(int i = 48; i <= 127; i++){
        cout << static_cast<char>(i) << " = " << i << '\n';
    }

    return 0;
}