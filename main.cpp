#include "Inclusion.h"
#include "Converter.cpp"

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

    int test = convert.bincon(digits);
    cout << test << endl;

    return 0;
}