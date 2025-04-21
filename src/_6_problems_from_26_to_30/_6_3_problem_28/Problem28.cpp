#include <iostream>
using namespace std;

int readTargetNumber() {
    cout << "Enter Target Number:" << endl;
    int targetNumber;
    cin >> targetNumber;
    return targetNumber;
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

int calculateSumOddNumbersFrom1toTargetNumberWithFor(const int TARGET_NUMBER) {
    int sumOddNumbers = 0;
    for (int number = 1; number <= TARGET_NUMBER; ++number)
        if (checkNumberType(number) == Odd)
            sumOddNumbers += number;
    return sumOddNumbers;
}

int calculateSumOddNumbersFrom1toTargetNumberWithWhile(const int TARGET_NUMBER) {
    int sumOddNumbers = 0;
    int number = 1;
    while (number <= TARGET_NUMBER) {
        if (checkNumberType(number) == Odd)
            sumOddNumbers += number;
        number++;
    }
    return sumOddNumbers;
}

int calculateSumOddNumbersFrom1toTargetNumberWithDoWhile(const int TARGET_NUMBER) {
    int sumOddNumbers = 0;
    int number = 1;
    do
        if (checkNumberType(number) == Odd)
            sumOddNumbers += number;
    while (number++ < TARGET_NUMBER);
    return sumOddNumbers;
}

void printSumOddNumbers(const int SUM_ODD_NUMBERS) { cout << "Sum Odd Numbers = " << SUM_ODD_NUMBERS << endl; }

int main() {
    const int TARGET_NUMBER = readTargetNumber();
    const string LINE = "******************************";
    cout << "(For)" << endl;
    printSumOddNumbers(calculateSumOddNumbersFrom1toTargetNumberWithFor(TARGET_NUMBER));
    cout << LINE << endl;
    cout << "(While)" << endl;
    printSumOddNumbers(calculateSumOddNumbersFrom1toTargetNumberWithWhile(TARGET_NUMBER));
    cout << LINE << endl;
    cout << "(Do-While)" << endl;
    printSumOddNumbers(calculateSumOddNumbersFrom1toTargetNumberWithDoWhile(TARGET_NUMBER));
}