#include <iostream>
using namespace std;

float readPositiveNumber(const string NUMBER_TYPE) {
    float targetNumber;
    do {
        cout << "Enter " << NUMBER_TYPE << " (positive number):" << endl;
        cin >> targetNumber;
    } while (targetNumber < 1);
    return targetNumber;
}

float calculateRemainder(
    const float TOTAL_BILL,
    const float CASH_PAID
) { return TOTAL_BILL - CASH_PAID; }

void printRemainder(const float REMAINDER) { cout << "Remainder = " << REMAINDER; }

int main() {
    printRemainder(
        calculateRemainder(
            readPositiveNumber("Cash Paid"),
            readPositiveNumber("Total Bill")
        )
    );
}