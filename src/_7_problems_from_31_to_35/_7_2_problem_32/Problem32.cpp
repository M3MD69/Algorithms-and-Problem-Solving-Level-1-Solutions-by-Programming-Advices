#include <iostream>
using namespace std;

int readNumber(const string TYPE_INPUT) {
    cout << "Enter " << TYPE_INPUT << ":" << endl;
    int number;
    cin >> number;
    return number;
}

long getNumberPowerOfExponent(const int NUMBER, int exponent) {
    if (NUMBER == 0)
        return 0L;
    if (exponent == 0)
        return 1L;
    if (exponent == 1)
        return NUMBER;
    long numberPowerOfExponent = NUMBER;
    while (exponent-- > 1)
        numberPowerOfExponent *= NUMBER;
    return numberPowerOfExponent;
}

void printPowerNumberOf2And3And4(const long NUMBER_POWER_OF_EXPONENT) {
    cout << "Number power of exponent is: " << NUMBER_POWER_OF_EXPONENT;
}

int main() {
    printPowerNumberOf2And3And4(
        getNumberPowerOfExponent(
            readNumber("Exponent"),
            readNumber("Number")
        )
    );
}