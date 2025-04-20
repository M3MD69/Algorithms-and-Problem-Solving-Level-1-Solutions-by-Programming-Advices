#include <iostream>
using namespace std;

void read2Numbers(int& first_number, int& second_number) {
    cout << "Enter First Number:" << endl;
    cin >> first_number;

    cout << "Enter Second Number:" << endl;
    cin >> second_number;
}

int maximumOf2Numbers(const int FIRST_NUMBER, const int SECOND_NUMBER) {
    if (FIRST_NUMBER > SECOND_NUMBER)
        return FIRST_NUMBER;
    return SECOND_NUMBER;
}

void printMaximumNumber(const int MAXIMUM_NUMBER) { cout << "Maximum number = " << MAXIMUM_NUMBER; }

int main() {
    int firstNumber, secondNumber;
    read2Numbers(firstNumber, secondNumber);
    printMaximumNumber(maximumOf2Numbers(firstNumber, secondNumber));
}