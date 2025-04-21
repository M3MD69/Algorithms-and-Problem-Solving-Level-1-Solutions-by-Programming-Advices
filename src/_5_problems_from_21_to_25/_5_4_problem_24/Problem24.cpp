#include <iostream>
using namespace std;

short readAge() {
    cout << "Enter age:" << endl;
    short age;
    cin >> age;
    return age;
}

bool validateNumberInRange(
    const short AGE,
    const short FROM,
    const short TO
) {
    return AGE >= FROM &&
        AGE <= TO;
}

void printStatus(const bool VALIDATED_STATUS) {
    cout << "Is a ";
    if (VALIDATED_STATUS)
        cout << "valid";
    else
        cout << "invalid";
    cout << " age";
}

int main() {
    printStatus(
        validateNumberInRange(
            readAge(),
            18,
            45
        )
    );
}