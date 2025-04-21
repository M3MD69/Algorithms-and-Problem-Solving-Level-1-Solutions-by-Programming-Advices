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


float calculateTotalBill(const float BILL_VALUE) {
    const float CHARGES_SERVICES = 0.1;
    const float SALES_TAX = 0.16;
    float totalBill = BILL_VALUE * (CHARGES_SERVICES + 1);
    totalBill *= SALES_TAX + 1;
    return totalBill;
}

void printTotalBill(const float TOTAL_BILL) { cout << "Total Bill = " << TOTAL_BILL; }

int main() { printTotalBill(calculateTotalBill(readPositiveNumber("Bill Value"))); }