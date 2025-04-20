#include <iostream>
using namespace std;

void read3Marks(
    int& mark1,
    int& mark2,
    int& mark3
) {
    cout << "Enter Mark 1:" << endl;
    cin >> mark1;

    cout << "Enter Mark 2:" << endl;
    cin >> mark2;

    cout << "Enter Mark 3:" << endl;
    cin >> mark3;
}

int calculateSumOf3Marks(
    const int MARK_1,
    const int MARK_2,
    const int MARK_3
) { return MARK_1 + MARK_2 + MARK_3; }

float calculateAverageOf3Marks(
    const int MARK_1,
    const int MARK_2,
    const int MARK_3
) {
    return static_cast<float>(
        calculateSumOf3Marks(
            MARK_1,
            MARK_2,
            MARK_3
        )
    ) / 3;
}

void printAverageOf3Marks(
    const int MARK_1,
    const int MARK_2,
    const int MARK_3,
    const float AVERAGE_OF_3_NUMBERS
) { cout << "(" << MARK_1 << " + " << MARK_2 << " + " << MARK_3 << ") / " << 3 << " = " << AVERAGE_OF_3_NUMBERS << endl; }

enum MarkStatus {
    Fail = 0,
    Pass = 1
};

MarkStatus checkMarkStatus(const float MARK) {
    if (MARK < 50)
        return Fail;
    return Pass;
}

void printStatus(const MarkStatus MARK_STATUS) {
    cout << "You ";
    if (MARK_STATUS == Pass)
        cout << "Passed";
    else
        cout << "Failed";
}

int main() {
    int mark1,
        mark2,
        mark3;
    read3Marks(
        mark1,
        mark2,
        mark3
    );
    const float AVERAGE_OF_3_NUMBERS = calculateAverageOf3Marks(
        mark1,
        mark2,
        mark3
    );
    printAverageOf3Marks(
        mark1,
        mark2,
        mark3,
        AVERAGE_OF_3_NUMBERS
    );
    printStatus(checkMarkStatus(AVERAGE_OF_3_NUMBERS));
}