#include <iostream>
using namespace std;

float readNumber(const string INPUT_MESSAGE) {
    cout << INPUT_MESSAGE << ":" << endl;
    float number;
    cin >> number;
    return number;
}

enum OperationType {
    Add = '+',
    Subtract = '-',
    Multiply = '*',
    Divide = '/'
};

OperationType readOperationType() {
    char operationType;
    do {
        cout << "Enter Operation Type (+, -, *, /)" << endl;
        cin >> operationType;
    } while (
        operationType != Add &&
        operationType != Subtract &&
        operationType != Multiply &&
        operationType != Divide
    );
    return static_cast<OperationType>(operationType);
}

float calculateResult(
    const float FIRST_NUMBER,
    const float SECOND_NUMBER,
    const OperationType OPERATION_TYPE
) {
    switch (OPERATION_TYPE) {
    case Add:
        return FIRST_NUMBER + SECOND_NUMBER;
    case Subtract:
        return FIRST_NUMBER - SECOND_NUMBER;
    case Multiply:
        return FIRST_NUMBER * SECOND_NUMBER;
    case Divide:
        return FIRST_NUMBER / SECOND_NUMBER;
    default:
        return 0;
    }
}

void printResult(const float RESULT) { cout << "Result = " << RESULT; }

int main() {
    const float FIRST_NUMBER = readNumber("Enter First Number"),
                SECOND_NUMBER = readNumber("Enter Second Number");
    const OperationType OPERATION_TYPE = readOperationType();
    printResult(
        calculateResult(
            FIRST_NUMBER,
            SECOND_NUMBER,
            OPERATION_TYPE
        )
    );
}