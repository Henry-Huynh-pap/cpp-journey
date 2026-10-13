#include <iostream>
#include <fstream>
using namespace std;
int main(){

    ifstream fin("Input_5.18.6.txt");
    ofstream fout("Output_5.18.6.txt");

    int n;

    fin >> n;

    for(int i = n; i >= 1 ;i--){
        fout << i << " ";
    }

    return 0;
}