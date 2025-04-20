#include <iostream>
using namespace std;

int readNumber() {
    cout << "Enter half number:" << endl;
    int number;
    cin >> number;
    return number;
}

float calculateHalfNumber(const int NUMBER) { return static_cast<float>(NUMBER) / 2; }

void printHalfNumber(const int NUMBER) { cout << "Half of " << NUMBER << " is " << calculateHalfNumber(NUMBER); }

int main() { printHalfNumber(readNumber()); }