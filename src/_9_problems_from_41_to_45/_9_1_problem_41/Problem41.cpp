#include <iostream>
using namespace std;

float readPositiveNumber(const string NUMBER_TYPE) {
    float targetNumber;
    do {
        cout << "Enter " << NUMBER_TYPE << " (positive number):" << endl;
        cin >> targetNumber;
    } while (targetNumber < 1);
    return targetNumber;
}

float calculateDaysByHours(const float HOURS) { return HOURS / 24; }

float calculateWeeksByDays(const float DAYS) { return DAYS / 7; }

int main() {
    const float HOURS = readPositiveNumber("Hours");
    const float DAYS = calculateDaysByHours(HOURS);
    const float WEEKS = calculateWeeksByDays(DAYS);

    cout << "Total Hours = " << HOURS << endl;
    cout << "Total DAYS = " << DAYS << endl;
    cout << "Total WEEKS = " << WEEKS;
}