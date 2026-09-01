#include <iostream>
int searchArray (int array[],int size, int element );
int main () {

    int variables [] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(variables)/sizeof(0);
    int index;
    int element;
    
    std::cout << "Enter the element you're searching for: ";
    std::cin >> element;

    index = searchArray(variables,size, element );

    if ( index != -1){
        std::cout << "Here is your index number: " << index;
    }
    else{
        std::cout << "It's not in the element";
    }

    return 0;
}
int searchArray (int array[],int size, int element ){
    for ( int i =0; i  < size; i++ ){
            if (array[i] == element){
                return i;
            }
    }
    return -1;
}