#include <iostream>
using namespace std;

void read3Numbers(
    int& number1,
    int& number2,
    int& number3
) {
    cout << "Enter Number 1:" << endl;
    cin >> number1;

    cout << "Enter Number 2:" << endl;
    cin >> number2;

    cout << "Enter Number 3:" << endl;
    cin >> number3;
}

int calculateSumOf3Numbers(
    const int NUMBER_1,
    const int NUMBER_2,
    const int NUMBER_3
) { return NUMBER_1 + NUMBER_2 + NUMBER_3; }

float calculateAverageOf3Numbers(
    const int NUMBER_1,
    const int NUMBER_2,
    const int NUMBER_3
) {
    return static_cast<float>(
        calculateSumOf3Numbers(
            NUMBER_1,
            NUMBER_2,
            NUMBER_3
        )
    ) / 3;
}

void printAverageOf3Numbers(
    const int NUMBER_1,
    const int NUMBER_2,
    const int NUMBER_3
) {
    const float AVERAGE_OF_3_NUMBERS = calculateAverageOf3Numbers(
        NUMBER_1,
        NUMBER_2,
        NUMBER_3
    );
    cout << "(" << NUMBER_1 << " + " << NUMBER_2 << " + " << NUMBER_3 << ") / " << 3 << " = " << AVERAGE_OF_3_NUMBERS;
}

int main() {
    int number1,
        number2,
        number3;
    read3Numbers(
        number1,
        number2,
        number3
    );
    printAverageOf3Numbers(
        number1,
        number2,
        number3
    );
}