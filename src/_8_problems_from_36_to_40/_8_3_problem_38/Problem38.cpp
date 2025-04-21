#include <cmath>
#include <iostream>
using namespace std;

enum NumberStatus {
    NotPrime = 0,
    Prime = 1
};

int readPositiveNumber() {
    int targetNumber;
    do {
        cout << "Enter positive number:" << endl;
        cin >> targetNumber;
    } while (targetNumber < 1);
    return targetNumber;
}

NumberStatus checkNumber(const int NUMBER) {
    switch (NUMBER) {
    case 1:
        return NotPrime;
    case 2:
    case 3:
        return Prime;
    default:
        if (NUMBER % 2 == 0 || NUMBER % 3 == 0)
            return NotPrime;
        const int SQUARE_ROOT_NUMBER = static_cast<int>(sqrt(NUMBER));
        for (int counter = 5; counter <= SQUARE_ROOT_NUMBER; counter += 2)
            if (NUMBER % counter == 0)
                return NotPrime;
        return Prime;
    }
}

void printStatus(const NumberStatus NUMBER_STATUS) {
    cout << "Is";
    if (NUMBER_STATUS == NotPrime)
        cout << "n't";
    cout << " Prime";
}

int main() { printStatus(checkNumber(readPositiveNumber())); }