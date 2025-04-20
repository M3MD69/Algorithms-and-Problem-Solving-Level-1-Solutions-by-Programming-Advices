#include <iostream>
using namespace std;

short readMark() {
    cout << "Enter Mark:" << endl;
    short mark;
    cin >> mark;
    return mark;
}

enum MarkStatus {
    Fail = 0,
    Pass = 1
};

MarkStatus checkMarkStatus(const short MARK) {
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

int main() { printStatus(checkMarkStatus(readMark())); }