#include "Converter.h"

Converter::Converter() {};

void Converter::bincon(vector<int> binary) {
    for(auto i : binary) {
        cout << i;
    }
}