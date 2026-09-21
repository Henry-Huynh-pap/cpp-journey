#include <iostream>
#include <string>

using namespace std;

int main(){

    int x = 18;
    int y = 2;
    int A,B,C,D,E;

    A = y + 3;
    B = y - 2;
    C = y * 5;
    D = x / y;
    E = x % y;

    cout << "Gtri x" << " " << "Gtri y" << " "<< "Bieu Thuc" <<"  " << "Ket qua" << '\n';
    cout << '\n';
    cout << "18|" << "    " << "2|" << "     " << "A=y+3" << "      " << "|A= " << A << '\n';
    cout << "18|" << "    " << "2|" << "     " << "B=y-2" << "      " << "|B= " << B  << '\n';
    cout << "18|" << "    " << "2|" << "     " << "C=y*5" << "      " << "|C= " << C << '\n';
    cout << "18|" << "    " << "2|" << "     " << "D=x/y" << "      " << "|D= " << D << '\n';
    cout << "18|" << "    " << "2|" << "     " << "E=x%y" << "      " << "|E= " << E << '\n';

    return 0;
}