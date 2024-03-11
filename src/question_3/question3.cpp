#include "question3.h"
#include <string>

using namespace std;

string get_fib_sequence(int n) {
    string sequence = "";

    int first = 0, second = 1;

    if (n >= 1) {
        sequence += to_string(first);
    }

    if (n >= 2) {
        sequence += " " + to_string(second);
    }

    for (int i = 3; i <= n; ++i) {
        int next = first + second;
        sequence += " " + to_string(next);
        first = second; 
        second = next;
    }
    return sequence;
}



bool test_config()
{
    return true;
}