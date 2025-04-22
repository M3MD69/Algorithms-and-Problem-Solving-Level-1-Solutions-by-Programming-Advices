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

float monthsPayment(
    const float LOAN_AMOUNT,
    const float MONTHS
) { return LOAN_AMOUNT / MONTHS; }


int main() {
    const float LOAN_AMOUNT = readPositiveNumber("Loan Amount");
    const float MONTHS = readPositiveNumber("Months");
    cout << monthsPayment(
        LOAN_AMOUNT,
        MONTHS
    ) << " Pound";
}