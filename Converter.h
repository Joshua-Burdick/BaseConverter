#pragma once
#include "Inclusion.h"

class Converter {
    private:
        int sum;
        vector<int> digits;
    public:
        int ToDecimal(vector<int> digits, int base);
        vector<int> deccon(int decimal);
};