//program to generate all possible permutations of a string
#include <iostream>
#include <string>
using namespace std;

// function to calculate the factorial of a number
int fact(int a)
{
    if (a == 0 || a == 1)
    {
        return 1;
    }
    else
    {
        return a * fact(a - 1);
    }
}

// function to swap two characters in a string
void swap(char &a, char &b)
{
    char temp = a;
    a = b;
    b = temp;
}

int isFound(string* arr, string query, int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == query) {
            return 1;
        }
    }
    return 0;
}

// function to generate permutations of a string
void generatePermutations(string str, int left, int right, int &count, string* words)
{

    if (left == right)
    {
        if(!isFound(words, str, count)) {
            cout << count+1 << ": " << str << endl;
            words[count] = str;
            count++; // to print the permutation
            return;
        }
        return;
    }
    else
    {
        for (int i = left; i < right; ++i)
        {
            // fix the first character and recursively generate permutations for the rest
            swap(str[left], str[i]);
            generatePermutations(str, left + 1, right, count, words);
            // restore the string to its original state (backtracking)
            swap(str[left], str[i]);
        }
    }
}

int main()
{
    string input;
    cout << "Enter a string: ";
    cin >> input;
    int n = input.length();
    cout << "Length of string: " << n << endl;
    int length = fact(n);
    cout << "Number of permutations: " << length << endl;
    cout << "All permutations of the string are:" << endl;
    int count = 0;
    string permutations[length];
    generatePermutations(input, 0, n, count, permutations);
    return 0;
}
