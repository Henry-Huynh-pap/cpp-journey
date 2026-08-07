#include <iostream>
int main () {

    std::string name;

    std::cout << "Enter your name: ";
    getline(std::cin, name);

  /*  if(name.length() >12 ){
        std::cout << "Your name can't be over 12 characters";
    }
    else{
        std::cout << "Welcome " << name;
    }
    */
    
    /*
    if(name.empty()){
        std::cout << "Your name is empty";
    }
    else{
        std::cout <<"Welcome " << name;
    }
    */

    /*
    name.clear();
    std::cout << "Welcome " << name;
    */

    /*
    name.append("@gmail.com");
    std::cout << "Welcome " << name;
    */

    /*
    std::cout << "Welcome " << name.at(0);
    */

    /*
    name.insert(2, "@");
    
    std::cout << "Welcome " << name;
    */

    /*
    std::cout << name.find(" ");
    */

    name.erase(0, 5);
    std::cout << name;



    return 0;
}