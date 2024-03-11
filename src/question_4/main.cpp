#include <iostream>
#include "question4.h"

using namespace std;

int main()
{
    int choice;
    do {
        int number;
        cout << "Enter a number between 1 and 15:  ";
        cin >> number;
        if (number < 1 || number > 15) {
            cout << "Please nter a number between 1 and 15." << endl;
            continue;
        }

        int fibonacci_number = get_fib_sequence(number);
        cout << "Fibonacci number for " << number << " is: " << fibonacci_number << endl;
        cout << "Do you want to continue? (1 for Yes, 0 for No):  ";
        cin >> choice;
    }
    while (choice != 0);

    return 0;
}