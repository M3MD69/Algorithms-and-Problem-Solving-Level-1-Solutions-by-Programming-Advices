#include <iostream>
using namespace std;

int readNumber() {
    cout << "Enter Number:" << endl;
    int number;
    cin >> number;
    return number;
}

enum NumberType {
    Odd = 1,
    Even = 2
};

NumberType checkNumberType(const int NUMBER) {
    const bool IS_EVEN_NUMBER = NUMBER % 2 == 0;
    if (IS_EVEN_NUMBER)
        return Even;
    return Odd;
}

void printNumberType(const NumberType NUMBER_TYPE) {
    cout << "Number is ";
    if (NUMBER_TYPE == Odd)
        cout << "Odd";
    else
        cout << "Even";
}

int main() { printNumberType(checkNumberType(readNumber())); }