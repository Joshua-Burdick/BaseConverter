#include "Inclusion.h"
#include "Converter.cpp"

void BoundError(int num, int base);
void revPrintVec(vector<int> vec);

int main() {
    
    Converter convert; // For converting the numbers

    int temp, decimal, base, change;
    string number;
    vector<int> digits;
    
    cout << "Enter the base of the number: ";
    cin >> base;

    cout << "Enter the number to convert: ";
    
    if (base == 10) {
        cin >> decimal;
    }
    else {
        cin >> number;
    }

    cout << "Enter the base to convert to: ";
    cin >> change;
    cout << endl; // Extra blank line for formatting

    if (base == change) {
        cout << "The number is already in that base!" << endl << endl;
    }
    else if (change == 10) {
        for(char i : number) {
            if ((static_cast<int>(i) - 48) >= base) {
                BoundError(static_cast<int>(i) - 48, base);
                break;
            }
            else {
                digits.push_back(static_cast<int>(i) - 48); // ASCII digits start at 48 (0)
            }
        }
        cout << "Final value: " << convert.toDecimal(digits, base) << endl << endl;
    }
    else if (base == 10) {
        digits = convert.toBase(decimal, change);
        cout << "Final value: ";
        revPrintVec(digits);
        cout << endl << endl;
    }
    else {
        // Convert into decimal and then into the final base. Normally slow by hand but much faster (and thus pheasible) with a computer
        for(char i : number) {
            if ((static_cast<int>(i) - 48) >= base) {
                BoundError(static_cast<int>(i) - 48, base);
                break;
            }
            else {
                digits.push_back(static_cast<int>(i) - 48); // ASCII digits start at 48 (0)
            }
        }

        temp = convert.toDecimal(digits, base);
        digits = convert.toBase(temp, change); // Now that digits has been used, it can be overwritten and re-used

        // Print the results
        cout << "Final value: ";
        revPrintVec(digits);
        cout << endl << endl;
    }

    return 0;
}

void BoundError(int num, int base) {
    cout << "Error: " << num << " is out of bounds for base " << base << endl << endl;
}

void revPrintVec(vector<int> vec) { // Print the contents of a vector from last element to first
    for(int i = 0; i < vec.size(); i++) {
        if(vec[vec.size() - 1 - i] < 10) {
            cout << vec[vec.size() - 1 - i];
        }
        else {
            cout << (char)(vec[vec.size() - 1 - i] + 55);
        }
    }
}