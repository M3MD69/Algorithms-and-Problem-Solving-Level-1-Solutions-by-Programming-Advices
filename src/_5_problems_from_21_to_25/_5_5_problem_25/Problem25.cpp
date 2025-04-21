#include <iostream>
using namespace std;

short readAge() {
    cout << "Enter age between 18 and 45:" << endl;
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

short readUntilAgeBetweenRange(
    const short FROM,
    const short TO
) {
    short age;
    do age = readAge();
    while (
        !validateNumberInRange(
            age,
            FROM,
            TO
        )
    );
    return age;
}

void printAge(const short AGE) { cout << "Your age is: " << AGE; }

int main() { printAge(readUntilAgeBetweenRange(18, 45)); }