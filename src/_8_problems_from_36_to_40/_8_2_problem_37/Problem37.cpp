#include <iostream>
using namespace std;

int readNumber(const int CURRENT_COUNT) {
    cout << "Enter Number (" << CURRENT_COUNT << ")" << endl;
    int number;
    cin >> number;
    return number;
}

long calculateSumOfNumbers() {
    long sum = 0;
    int counter = 1;
    int number;
    do sum += number = readNumber(counter++);
    while (number != 0);
    return sum;
}

void printSum(const long SUM_OF_NUMBERS) { cout << "Sum of Numbers = " << SUM_OF_NUMBERS; }

int main() { printSum(calculateSumOfNumbers()); }