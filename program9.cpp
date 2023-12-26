// sum of series 1/1! + 2/2! + 3/3! + ... + N/N! using nested loops.
#include <iostream>
using namespace std;

// recursive function to find factorial of a number
int fact(int n) {

    return (n > 0) ? n * fact(n - 1) : 1;
}

// main function
int main() {

    // initlizing the sum and input a number
    int num;
    double sum = 0.0;

    cout << "Enter number: ";
    cin >> num;

    // calculating and displaying the sum  of the series
    cout << "The sum of the following series" << endl;

    for (int i = 1; i <= num; i++) {
        int nFact = 1;
        for (int j = 1; j <= i; j++) {
            nFact = nFact * j;
        }

        if (i < num) {
            cout << i << "/" << i << "! + ";
        } else {
            cout << i << "/" << i << "! = ";
        }

        sum += double(i) / nFact;
    }

    cout << sum << endl;

    return 0;
}
