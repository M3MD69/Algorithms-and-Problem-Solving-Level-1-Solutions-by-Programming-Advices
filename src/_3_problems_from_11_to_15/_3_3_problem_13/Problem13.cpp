#include <iostream>
using namespace std;

void read3Numbers(
    int& first_number,
    int& second_number,
    int& third_number
) {
    cout << "Enter First Number:" << endl;
    cin >> first_number;

    cout << "Enter Second Number:" << endl;
    cin >> second_number;

    cout << "Enter Third Number:" << endl;
    cin >> third_number;
}

int maximumOf3Numbers(
    const int FIRST_NUMBER,
    const int SECOND_NUMBER,
    const int THIRD_NUMBER
) {
    if (
        FIRST_NUMBER >= SECOND_NUMBER &&
        FIRST_NUMBER >= THIRD_NUMBER
    )
        return FIRST_NUMBER;
    if (
        SECOND_NUMBER >= FIRST_NUMBER &&
        SECOND_NUMBER >= THIRD_NUMBER
    )
        return SECOND_NUMBER;
    return THIRD_NUMBER;
}

void printMaximumNumber(const int MAXIMUM_NUMBER) { cout << "Maximum number = " << MAXIMUM_NUMBER; }

int main() {
    int firstNumber,
        secondNumber,
        thirdNumber;
    read3Numbers(
        firstNumber,
        secondNumber,
        thirdNumber
    );
    printMaximumNumber(
        maximumOf3Numbers(
            firstNumber,
            secondNumber,
            thirdNumber
        )
    );
}