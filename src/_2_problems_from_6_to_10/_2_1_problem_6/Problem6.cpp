#include <iostream>
using namespace std;

struct FullName {
    string firstName, secondName;
};

FullName readFullName() {
    FullName fullName;

    cout << "Enter First Name:" << endl;
    cin >> fullName.firstName;

    cout << "Enter Second Name:" << endl;
    cin >> fullName.secondName;

    return fullName;
}

string getFullName(const FullName FULL_NAME) { return FULL_NAME.firstName + " " + FULL_NAME.secondName; }

void printFullName(const string FULL_NAME) { cout << "Your full name is: " << FULL_NAME; }

int main() { printFullName(getFullName(readFullName())); }