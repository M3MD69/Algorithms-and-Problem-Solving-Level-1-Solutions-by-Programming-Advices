#include <iostream>
using namespace std;

struct Person {
    short age;
    bool hasDriverLicense;
};

Person readInformation() {
    Person person;

    cout << "Enter age:" << endl;
    cin >> person.age;

    cout << "Do you have a driver license?" << endl;
    cin >> person.hasDriverLicense;

    return person;
}

bool isAccepted(const Person PERSON) { return PERSON.age >= 21 && PERSON.hasDriverLicense; }

void printStatus(const bool IS_ACCEPTED) {
    if (IS_ACCEPTED)
        cout << "Hired";
    else
        cout << "Rejected";
}

int main() { printStatus(isAccepted(readInformation())); }