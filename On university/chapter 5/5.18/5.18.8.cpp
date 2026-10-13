#include <iostream>
#include <fstream>
using namespace std;
int main(){

    fstream fin ("Input_5.18.8.txt");
    ofstream fout ("Output_5.18.8.txt");

    int n, a;
    int result = 1;

    fin >> n;

    while(n > 0){
        a = n % 10;
        result = result * a ;
        n = n / 10;
    }

    fout << result;

    return 0;
}