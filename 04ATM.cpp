//Implement a C++ program that simulates a simple ATM machine, allowing users to check their balance, deposit, or withdraw money using a switch statement.
#include <iostream>
using namespace std;

int main() {
    //balance is 50000 Rs
    float balance = 50000.0;
    int choice;
    float amount;

    //to print infinitely
    while (true) {
        cout << "\t\t XYZ ATM \t\t" << endl;
        cout << "*****************" << endl;
        cout << "1. Check Balance \t\t 2.Deposit Money\n" << endl;
        cout << "3. Withdraw Money \t\t 4.Exit" << endl;
        cout << "*****************" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        //using switch loop to print a menu and let user choose which block of code they want to access
        //choice 1 to see account balance
        switch (choice) {
            case 1:
                cout << "Your balance is: ₹" << balance << "\n"<<endl;
                break;

            //choice 2 to deposit money (only if amount to deposit is >0)
            case 2:
                cout << "Enter the amount to deposit: ₹";
                cin >> amount;
                if (amount > 0) {
                    balance += amount;
                    cout << "Deposited ₹" << amount << " successfully.\n" << endl;
                } else {
                    cout << "Invalid amount. Please enter a positive amount.\n" << endl;
                }
                break;

            //choice 3 to withdraw money
            case 3:
                cout << "Enter the amount to withdraw: ₹";
                cin >> amount;
                //only allowed to withdraw if amount to be withdrawn <= account balance and is a positive number
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    cout << "Withdrawn ₹" << amount << " successfully.\n" << endl;
                } else if (amount > balance) {
                    cout << "Insufficient balance.\n" << endl;
                } else {
                    cout << "Invalid amount. Please enter a positive amount.\n" << endl;
                }
                break;

            //choice 4 to exit the ATM
            case 4:
                cout << "Exiting the ATM. Have a nice day!" << endl;
                return 0;//ends entire main function's execution

            //default message to print if user enters a value other than 1,2,3,4
            default:
                cout << "Invalid choice. Please select a valid option.\n" << endl;
                break;
        }
    }

    return 0;
}
