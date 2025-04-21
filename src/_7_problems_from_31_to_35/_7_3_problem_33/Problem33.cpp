#include <iostream>
using namespace std;

short readMark() {
    short mark;
    do {
        cout << "Enter Mark:" << endl;
        cin >> mark;
    } while (mark < 0 || mark > 100);
    return mark;
}

enum Grade { A, B, C, D, E, F };

Grade calculateGrade(const short MARK) {
    if (MARK >= 90)
        return A;
    if (MARK >= 80)
        return B;
    if (MARK >= 70)
        return C;
    if (MARK >= 60)
        return D;
    if (MARK >= 50)
        return E;
    return F;
}

void printGrade(const Grade GRADE) {
    const char GRADES[] = {'A', 'B', 'C', 'D', 'E', 'F'};
    cout << "Your Grade: " << GRADES[GRADE];
}

int main() { printGrade(calculateGrade(readMark())); }