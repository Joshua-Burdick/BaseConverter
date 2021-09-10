#include "Converter.h"

Converter::Converter() {
    return;
}

// Convert binary to decimal
int Converter::bincon(vector<int> binary) {
    for(int i = 0; i < binary.size(); i++) {
        cout << binary[i] * pow(2, binary.size() - i) / 2 << " ";
        sum += binary[i] * pow(2, binary.size() - i) / 2; // Multiply each entry by 2 to the entry's power and add them together
        cout << sum << endl;
    }

    return sum;
}