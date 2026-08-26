#include <iostream>
#include <iomanip>

void showBalence (double balence);
double deposit ();
double withdraw (double balence);

int main (){

    double balence = 0;
    int choice = 0;

    do {
        std::cout << "************\n";
        std::cout << "Enter the the number of your choice\n";
        std::cout << "************\n";
        std::cout << "1. Show balence\n";
        std::cout << "2. Deposit the money\n";
        std::cout << "3. Withdraw the money\n";
        std::cout << "4. Exit the program\n";
        std::cout << "My number of choice is: ";
        std::cin >> choice;

        std::cin.clear();
        fflush(stdin);

    switch (choice) {
        case 1: showBalence ( balence);
                break;
        case 2: balence += deposit ();
                showBalence ( balence);
                break;
        case 3: balence -= withdraw(balence);
                showBalence (balence);
                break;
        case 4: std::cout << "Thanks for using the program";
                break;
        default : std::cout << "Please enter the correct value\n";
    }

    } while (choice != 4 );

    return 0;
    
}

void showBalence (double balence) {
    std::cout << "Your balence is: $" <<  std::setprecision(2) << std::fixed << balence <<'\n';
}

double deposit () {
    double amount = 0;
    
    std::cout << "Enter the deposited of your amount: ";
    std::cin >> amount;

    if (amount >0) {
        return amount;
    }
    else {
        std::cout << "Please enter the correct of the value\n";
        return 0;
    }
}

double withdraw (double balence){
    double amount = 0;

    std::cout << "Enter amount to be withdrawn: ";
    std::cin >> amount;

    if (amount > balence) {
        std::cout << "Invalid\n";
        return 0;
    }
    else if (amount < 0) {
        std::cout << "Invalid\n";
        return 0;
    }
    else {
        return amount;
    }
}