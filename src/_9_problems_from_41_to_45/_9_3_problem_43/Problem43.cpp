#include <iostream>
using namespace std;

int readPositiveNumber() {
    int number;
    do {
        cout << "Enter total seconds (positive number):" << endl;
        cin >> number;
    } while (number < 1);
    return number;
}

struct Duration {
    int days, hours, minutes, seconds;
};

void printTime(const Duration DURATION) { cout << DURATION.days << ":" << DURATION.hours << ":" << DURATION.minutes << ":" << DURATION.seconds;}

Duration calculateTime(const int TOTAL_SECONDS) {
    Duration duration;

    const int SECONDS_PER_DAY = 24 * 60 * 60,
              SECONDS_PER_HOUR = 60 * 60,
              SECONDS_PER_MINUTE = 60;

    duration.days = TOTAL_SECONDS / SECONDS_PER_DAY;
    int remainderSeconds = TOTAL_SECONDS % SECONDS_PER_DAY;

    duration.hours = remainderSeconds / SECONDS_PER_HOUR;
    remainderSeconds %= SECONDS_PER_HOUR;

    duration.minutes = remainderSeconds / SECONDS_PER_MINUTE;
    remainderSeconds %= SECONDS_PER_MINUTE;

    duration.seconds = remainderSeconds;

    return duration;
}
int main() { printTime(calculateTime(readPositiveNumber())); }