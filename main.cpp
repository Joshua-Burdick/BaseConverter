#include "Inclusion.h"
#include "Converter.h"

using namespace std;

void read (string &var);

int main() {

    Converter convert; // For converting the numbers

    string to, from, input;

    cout << "Enter starting base: ";
    read(to);

    cout << "Enter base to convert to: ";
    read(from);

    cout << "Enter number to be converted: ";
    read(input);

    return 0;
}

void read (string &var) {
    getline(cin, var);
}