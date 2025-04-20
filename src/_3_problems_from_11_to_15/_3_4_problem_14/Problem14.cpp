#include <iostream>
using namespace std;

void readNumbers(int& firstNumber, int& secondNumber) {
    cout << "Enter First Number:" << endl;
    cin >> firstNumber;

    cout << "Enter Second Number:" << endl;
    cin >> secondNumber;
}

void swap2Numbers(int& firstNumber, int& secondNumber) {
    firstNumber += secondNumber;
    secondNumber = firstNumber - secondNumber;
    firstNumber -= secondNumber;
}

void printNumbers(const int FIRST_NUMBER, const int SECOND_NUMBER) {
    cout << "First Number = " << FIRST_NUMBER << endl;
    cout << "Second Number = " << SECOND_NUMBER << endl;
}

int main() {
    int firstNumber, secondNumber;
    readNumbers(firstNumber, secondNumber);

    cout << "Before Swap:" << endl;
    printNumbers(firstNumber, secondNumber);

    cout << "\nAfter Swap:" << endl;
    swap(firstNumber, secondNumber);
    printNumbers(firstNumber, secondNumber);
}