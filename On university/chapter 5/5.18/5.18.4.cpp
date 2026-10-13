#include <iostream>
#include <fstream>
using namespace std;
int main() {

    ifstream fin("Input_5.18.4.txt");
    ofstream fout("Output_5.18.4.txt");

    int n; 
    int sum = 0; 
    
    fin >> n;

    for(int i = 1; i <= n; i++){
        sum = sum + (i*i);
    }

    fout << sum;

    return 0;
}