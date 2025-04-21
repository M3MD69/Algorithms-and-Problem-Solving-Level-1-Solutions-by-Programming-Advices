#include <iostream>
using namespace std;

int readTotalSales() {
    cout << "Enter Total Sales:" << endl;
    int totalSales;
    cin >> totalSales;
    return totalSales;
}

float commissionPercentage(const int TOTAL_SALES) {
    float percentage;
    if (TOTAL_SALES > 1000000)
        percentage = 0.05;
    else if (TOTAL_SALES > 500000)
        percentage = 0.03;
    else if (TOTAL_SALES > 100000)
        percentage = 0.02;
    else if (TOTAL_SALES > 50000)
        percentage = 0.01;
    else
        percentage = 0.0;
    return percentage;
}

float calculateCommission(const int TOTAL_SALES, const float PERCENTAGE) { return TOTAL_SALES * PERCENTAGE; }

void printCommission(const float COMMISSION) { cout << "Your commission is: " << COMMISSION; }

int main() {
    const int TOTAL_SALES = readTotalSales();
    printCommission(
        calculateCommission(
            TOTAL_SALES,
            commissionPercentage(TOTAL_SALES)
        )
    );
}