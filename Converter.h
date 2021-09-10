#pragma once
#include "Inclusion.h"

class Converter {
    private:
        int sum;
        vector<int> digits;
    public:
        int toDecimal(vector<int> digits, int base);
        vector<int> toBase(int decimal, int base);
};