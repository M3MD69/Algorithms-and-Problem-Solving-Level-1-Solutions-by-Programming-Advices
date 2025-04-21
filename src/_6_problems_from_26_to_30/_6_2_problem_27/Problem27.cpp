#include <iostream>
using namespace std;

int readTargetNumber() {
    cout << "Enter Target Number:" << endl;
    int targetNumber;
    cin >> targetNumber;
    return targetNumber;
}

void printNumbersFromTargetNumberTo1WithFor(const int TARGET_NUMBER) {
    cout << "Numbers from target number to 1 with (For)" << endl;
    for (int number = TARGET_NUMBER; number >= 1; --number)
        cout << number << endl;
}

void printNumbersFromTargetNumberTo1WithWhile(const int TARGET_NUMBER) {
    cout << "Numbers from target number to 1 with (While)" << endl;
    int number = TARGET_NUMBER;
    while (number >= 1)
        cout << number-- << endl;
}

void printNumbersFromTargetNumberTo1WithDoWhile(const int TARGET_NUMBER) {
    cout << "Numbers from target number to 1 with (Do-While)" << endl;
    int number = TARGET_NUMBER;
    do
        cout << number-- << endl;
    while (number >= 1);
}

int main() {
    const int TARGET_NUMBER = readTargetNumber();
    const string LINE = "******************************";
    printNumbersFromTargetNumberTo1WithFor(TARGET_NUMBER);
    cout << LINE << endl;
    printNumbersFromTargetNumberTo1WithWhile(TARGET_NUMBER);
    cout << LINE << endl;
    printNumbersFromTargetNumberTo1WithDoWhile(TARGET_NUMBER);
}