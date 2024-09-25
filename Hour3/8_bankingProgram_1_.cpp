#include <iostream>
#include <iomanip> //show decimal

using namespace std;

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main(){
    double balance = 100;
    int choice = 0;

    do{
        cout << "**********************\n";
        cout << "1. Show Balance \n";
        cout << "2. Deposit Money \n";
        cout << "3. Withdraw \n";
        cout << "4. Exit \n";
        cout << "**********************\n";

        cout << "Enter :";
        cin  >> choice;

        cin.clear();
        fflush(stdin);

        switch(choice){
            case 1: showBalance(balance);
            break;
        
            case 2: balance = balance + deposit();
            showBalance(balance);
            break;

            case 3: balance -= withdraw(balance);
            showBalance(balance);
            break;

            case 4: cout << "Thans for visiting! !\n";
            break;

            default: cout << "Invalid input \n";
        }
    }while(choice != 4);
    return 0;
}

void showBalance(double balance){
    cout << "Your balance is  : $" << setprecision(2) << fixed << balance << "\n";
}
double deposit(){
    double amount = 0;
    cout << "Enter amount to be deposit :";
    cin >> amount;

    if(amount > 0){
        return amount;
    }else{
        cout <<  "Not valid input \n";
        return 0;
    }
    return amount;
}

double withdraw(double balance){
    double amount = 0;
    cout << "Enter amount to be withdraw : ";
    cin >> amount;

    if(amount > balance){
        cout << "Too low balance in bank!\n";
        return 0;
    }
    else if(amount < 0){
        cout << "That is not valid \n";
        return 0;
    }
    return amount;
}