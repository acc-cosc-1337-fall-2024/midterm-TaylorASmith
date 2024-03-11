#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string decimal_to_hex(int decimal) {
    stringstream ss;
    ss << hex << decimal;
}

int main()
{
int value;
string result;

while (true) {
    cout << "Enter a value between 1 and 512. (0 to exit):  ";
    cin >> value;

    if (value == 0) {
        cout << "Eixting program." << endl;
        break;
    }

    if (value < 1 || value > 512 ) {
        cout << "Invalid input. Please enter value between 1 and 512. (0 to exit)" << endl;
        continue;
    }

    result = decimal_to_hex(value);

    cout << "Hexidecimal Version:  " << result << endl;
}

    return 0;
}