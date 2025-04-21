#include <iostream>
using namespace std;

struct Wallet {
    int pennies,
        nickels,
        dimes,
        quarters,
        dollars;
};

Wallet readCoins() {
    Wallet wallet;

    cout << "Enter pennies:" << endl;
    cin >> wallet.pennies;

    cout << "Enter nickels:" << endl;
    cin >> wallet.nickels;

    cout << "Enter dimes:" << endl;
    cin >> wallet.dimes;

    cout << "Enter quarters:" << endl;
    cin >> wallet.quarters;

    cout << "Enter dollars:" << endl;
    cin >> wallet.dollars;

    return wallet;
}

int calculateTotalPennies(const Wallet WALLET) {
    return WALLET.pennies
        + WALLET.nickels * 5
        + WALLET.dimes * 10
        + WALLET.quarters * 25
        + WALLET.dollars * 100;
}

float calculateTotalDollarsByPennies(const int TOTAL_PENNIES) { return static_cast<float>(TOTAL_PENNIES) / 100; }

void printTotalPennies(const int TOTAL_PENNIES) { cout << "Total Pennies = " << TOTAL_PENNIES << endl; }

void printTotalDollars(const float TOTAL_DOLLARS) { cout << "Total Dollars = " << TOTAL_DOLLARS << endl; }

int main() {
    const Wallet WALLET = readCoins();
    const int TOTAL_PENNIES = calculateTotalPennies(WALLET);
    printTotalPennies(TOTAL_PENNIES);
    printTotalDollars(calculateTotalDollarsByPennies(TOTAL_PENNIES));
}