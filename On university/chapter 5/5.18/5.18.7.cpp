#include <iostream>
#include <fstream>
using namespace std;
int main(){

    fstream fin("Input_5.18.7.txt");
    ofstream fout("Output_5.18.7.txt");

    int n;
    int sum = 0;

    fin >> n;

    for(int i = 0; i <= n; i++){
        if( i % 2 == 0 ){
            sum = sum + i;
        }
    }

    fout << "The result is: " << sum;

    return 0;
}