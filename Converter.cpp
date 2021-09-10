#include "Converter.h"

// Convert binary to decimal
int Converter::bincon(vector<int> binary) {

    sum = 0;

    for(int i = 0; i < binary.size(); i++) {
        sum += binary[i] * pow(2, binary.size() - i) / 2; // Multiply each entry by 2 to the entry's power and add them together
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