#include <iostream>
using namespace std;
int main(){

    int length1,width1;
    int length2,width2;
    int area1, area2;

    cout << "Enter the first length of a retangle: ";
    cin >> length1;

    cout << "Enter the first width of a retangle: ";
    cin >> width1;

    cout << "Enter the second length of a retangle: ";
    cin >> length2;

    cout << "Enter the second width of a retangle: ";
    cin >> width2;

    area1 = length1 * width1;
    area2 = length2 * width2;

    if(area1 > area2){
        cout << "The first retangle has the greater area than the second retangle";
    }
    else if(area1 == area2){
        cout << "Both area are the same";
    }
    else{
        cout << "The second retangle has the greater area than the first retangle";
    }

    return 0;
}