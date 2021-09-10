#include "Inclusion.h"
#include "Converter.cpp"

int main() {

    Converter convert; // For converting the numbers

    int menu, decimal;
    string binary;
    vector<int> digits;

    cout << "Enter 1 for binary to decimal or 2 for decimal to binary: ";
    cin >> menu;

    if (menu == 1) {
        cout << "Enter binary to convert: ";
        cin >> binary;

        for(char i : binary) {
            digits.push_back(static_cast<int>(i) - 48); // ASCII digits start at 48 (0)
        }

        cout << convert.bincon(digits) << endl;
    }
    else if (menu == 2) {
        cout << "Enter decimal to convert: ";
        cin >> decimal;

        digits = convert.deccon(decimal);
        for (int i = 0; i < digits.size(); i++) {
            cout << digits[digits.size() - 1 - i];
        }
    }

    return 0;
}