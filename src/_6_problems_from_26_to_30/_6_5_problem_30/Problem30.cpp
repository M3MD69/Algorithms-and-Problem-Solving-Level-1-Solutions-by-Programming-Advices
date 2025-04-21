#include <iostream>
using namespace std;

short readPositiveNumber() {
    short targetNumber;
    do {
        cout << "Enter positive number:" << endl;
        cin >> targetNumber;
    } while (targetNumber < 1);
    return targetNumber;
}

long getFactorial(const int NUMBER) {
    long multiplication = 1;
    for (int counter = NUMBER; counter > 0; --counter)
        multiplication *= counter;
    return multiplication;
}

void printFactorial(const long FACTORIAL) { cout << "Factorial = " << FACTORIAL << endl; }

int main() { printFactorial(getFactorial(readPositiveNumber())); }