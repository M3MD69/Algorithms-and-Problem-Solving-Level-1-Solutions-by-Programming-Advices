#include <iostream>
#include <cmath>
using namespace std;

float readPositiveNumber(const string NUMBER_TYPE) {
    float targetNumber;
    do {
        cout << "Enter " << NUMBER_TYPE << " (positive number):" << endl;
        cin >> targetNumber;
    } while (targetNumber < 1);
    return targetNumber;
}

float monthsRequired(
    const float LOAN_AMOUNT,
    const float MONTHLY_PAYMENT
) { return ceil(LOAN_AMOUNT / MONTHLY_PAYMENT); }


int main() {
    const float LOAN_AMOUNT = readPositiveNumber("Loan Amount");
    const float MONTHLY_PAYMENT = readPositiveNumber("Monthly Payment");
    cout << monthsRequired(
        LOAN_AMOUNT,
        MONTHLY_PAYMENT
    ) << " Months";
}