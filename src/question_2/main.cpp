#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;

int roll_die() {
    return (rand() % 6) + 1;
}

int main()
{
    char choice;

    srand(time(NULL));

    do {
        cout << "Enter Y to roll dice:  ";
        cin >> choice;

        if (choice == 'Y' || choice == 'y'); 
        {
            int result = roll_die();
            cout << "You rolled:  " << result << endl;
        }
    }
    while(choice == 'Y' || choice == 'y');
    cout << "Goobye!" << endl;

    return 0;
}