#include "Inclusion.h"
#include "Converter.h"

void read (string &var);

int main() {

    Converter convert; // For converting the numbers

    // string to, from, input;

    string binary;
    vector<int> digits;

    cout << "Enter binary to convert: ";
    cin >> binary;

    for(char i : binary) {
        digits.push_back(static_cast<int>(i) - 48); // ASCII digits start at 48 (0)
    }

    convert.bincon(digits);

    return 0;
}

/* POTENTIAL TOOL - IN PROGRESS */

void read (string &var) {
    getline(cin, var);
}