#include "Converter.h"

// Convert a number in an arbitrary base to decimal
int Converter::ToDecimal(vector<int> num, int base) {

    sum = 0;

    for(int i = 0; i < num.size(); i++) {
        sum += num[i] * pow(base, num.size() - 1 - i); // Multiply each entry by [base] to the entry's power and add them together
    }

    return sum;
}

// Convert decimal to binary /* NON-WORKING */
vector<int> Converter::deccon(int decimal) {

    sum = decimal;

    while (sum >= 1) {
        digits.push_back(sum % 2);
        sum = floor(sum / 2);
    }

    return digits;
}