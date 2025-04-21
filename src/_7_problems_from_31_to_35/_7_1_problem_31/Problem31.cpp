#include <iostream>
using namespace std;

int readNumber() {
    cout << "Enter Number:" << endl;
    int number;
    cin >> number;
    return number;
}

void printPowerNumberOf2And3And4(const int NUMBER) {
    const int POWER_NUMBER_2 = NUMBER * NUMBER,
              POWER_NUMBER_3 = NUMBER * NUMBER * NUMBER,
              POWER_NUMBER_4 = NUMBER * NUMBER * NUMBER * NUMBER;
    cout << NUMBER << "^" << 2 << " = " << POWER_NUMBER_2 << endl;
    cout << NUMBER << "^" << 3 << " = " << POWER_NUMBER_3 << endl;
    cout << NUMBER << "^" << 4 << " = " << POWER_NUMBER_4 << endl;
}

int main() { printPowerNumberOf2And3And4(readNumber()); }