#include <iostream>
using namespace std;

int readTargetNumber() {
    cout << "Enter Target Number:" << endl;
    int targetNumber;
    cin >> targetNumber;
    return targetNumber;
}

void printNumbersFrom1toTargetNumberWithFor(const int TARGET_NUMBER) {
    cout << "Numbers from 1 to target number with (For)" << endl;
    for (int number = 1; number <= TARGET_NUMBER; ++number)
        cout << number << endl;
}

void printNumbersFrom1toTargetNumberWithWhile(const int TARGET_NUMBER) {
    cout << "Numbers from 1 to target number with (While)" << endl;
    int number = 1;
    while (number <= TARGET_NUMBER)
        cout << number++ << endl;
}

void printNumbersFrom1toTargetNumberWithDoWhile(const int TARGET_NUMBER) {
    cout << "Numbers from 1 to target number with (Do-While)" << endl;
    int number = 1;
    do
        cout << number++ << endl;
    while (number <= TARGET_NUMBER);
}

int main() {
    const int TARGET_NUMBER = readTargetNumber();
    const string LINE = "******************************";
    printNumbersFrom1toTargetNumberWithFor(TARGET_NUMBER);
    cout << LINE << endl;
    printNumbersFrom1toTargetNumberWithWhile(TARGET_NUMBER);
    cout << LINE << endl;
    printNumbersFrom1toTargetNumberWithDoWhile(TARGET_NUMBER);
}