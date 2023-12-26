// to find largest among three numbers using nested if else loop
#include <iostream>
using namespace std;

// main function
int main() {

    // input numbers from user
    int num1, num2, num3;
    cout << "Enter first number: ";
    cin >> num1;
    
    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter third number: ";
    cin >> num3;

    // check weather first number or second number or third number is bagger among them
    if (num1 >= num2) {
        if (num1 >= num3) {
            cout << num1 << " is bigger than " << num2 << " and " << num3 << endl;
        } else {
            cout << num3 << " is bigger than " << num1 << " and " << num2 << endl;
        }
    } else {
        if (num2 >= num3) {
            cout << num2 << " is bigger than " << num1 << " and " << num3 << endl;
        } else {
            cout << num3 << " is bigger than " << num1 << " and " << num2 << endl;
        }
    }
}
