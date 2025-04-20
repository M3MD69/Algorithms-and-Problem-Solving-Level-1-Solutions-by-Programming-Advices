#include <iostream>
using namespace std;

struct Person {
    short age;
    bool hasDriverLicense;
    bool hasRecommendation;
};

Person readInformation() {
    Person person;

    cout << "Enter age:" << endl;
    cin >> person.age;

    cout << "Do you have a driver license?" << endl;
    cin >> person.hasDriverLicense;

    cout << "Do you have a recommendation?" << endl;
    cin >> person.hasRecommendation;

    return person;
}

bool isAccepted(const Person PERSON) {
    if (PERSON.hasRecommendation)
        return true;
    return PERSON.age >= 21 && PERSON.hasDriverLicense;
}

void printStatus(const bool IS_ACCEPTED) {
    if (IS_ACCEPTED)
        cout << "Hired";
    else
        cout << "Rejected";
}

int main() { printStatus(isAccepted(readInformation())); }