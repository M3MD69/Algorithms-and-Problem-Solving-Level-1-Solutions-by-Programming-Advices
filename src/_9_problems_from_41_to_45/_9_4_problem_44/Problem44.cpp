#include <iostream>
using namespace std;

enum WeekDay {
    Saturday = 1,
    Sunday = 2,
    Monday = 3,
    Tuesday = 4,
    Wednesday = 5,
    Thursday = 6,
    Friday = 7
};

short readNumber() {
    short number;
    do {
        cout << "Enter total seconds (positive number):" << endl;
        cin >> number;
    } while (number < 1 || number > 7);
    return number;
}

WeekDay readWeekDay() { return static_cast<WeekDay>(readNumber()); }

string getDayByNumber(const short DAY_BY_NUMBER) {
    switch (DAY_BY_NUMBER) {
    case Saturday:
        return "Saturday";
    case Sunday:
        return "Sunday";
    case Monday:
        return "Monday";
    case Tuesday:
        return "Tuesday";
    case Wednesday:
        return "Wednesday";
    case Thursday:
        return "Thursday";
    case Friday:
        return "Friday";
    default:
        return "Unknown";
    }
}

int main() { cout << getDayByNumber(readWeekDay()); }