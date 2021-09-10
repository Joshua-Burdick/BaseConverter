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
int Converter::deccon(int decimal) {

    sum = 0;
    int temp = decimal;

    while (temp >= 1) {
        sum += temp % 2;
        cout << sum << " ";
        temp = floor(temp / 2);
        cout << temp << endl;
    }

    return sum;
}