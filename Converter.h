#pragma once
#include "Inclusion.h"

class Converter {
    private:
        int sum;
        vector<int> digits;
    public:
        int bincon(vector<int> binary);
        int deccon(int decimal);
};