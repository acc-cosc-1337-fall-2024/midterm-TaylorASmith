#include <iostream>
#include "question3.h"

using namespace std;

int main()
{
    int number;
    char choice;

    do {
        cout << "enter a number between 1 and 15:  ";
        cin >> number;

        if (number < 1 || number > 15) {
            cout << "Invalid input: Please input number between 1 and 15." << endl;
            continue;
        }

        string fibonacci_sequence = get_fib_sequence(number);
        cout << "Fibonacci Sequence up to " << number << "terms:  " << fibonacci_sequence << endl;

        cout << "Do you want to continue? (y/n)";
        cin >> choice;
    }
    while (choice == 'y' || choice == 'Y');
    cout <<"Exiting program." << endl;

    return 0;
}