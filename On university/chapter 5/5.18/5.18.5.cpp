#include <iostream>
#include <fstream>
using namespace std;
int main(){

    ifstream fin("Input_5.18.5.txt");
    ofstream fout("Output_5.18.5.txt");

    int a,b;

    fin >> a >> b;

    for(int i = a; i <= b; i++){
        fout << static_cast<char>(i) << " = " << i << '\n';
    }

    return 0;
}