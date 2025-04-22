#include <iostream>
using namespace std;

struct Duration {
    int days, hours, minutes, seconds;
};

int readPositiveNumber(const string NUMBER_TYPE) {
    float targetNumber;
    do {
        cout << "Enter " << NUMBER_TYPE << " (positive number):" << endl;
        cin >> targetNumber;
    } while (targetNumber < 1);
    return targetNumber;
}

Duration readDuration() {
    return {
        readPositiveNumber("Days"),
        readPositiveNumber("Hours"),
        readPositiveNumber("Minutes"),
        readPositiveNumber("Seconds")
    };
}

int calculateTotalSeconds(const Duration DURATION) {
    const int SECONDS_OF_DAYS = DURATION.days * 24 * 60 * 60;
    const int SECONDS_OF_HOURS = DURATION.hours * 60 * 60;
    const int SECONDS_OF_MINUTES = DURATION.minutes * 60;
    return SECONDS_OF_DAYS +
        SECONDS_OF_HOURS +
        SECONDS_OF_MINUTES +
        DURATION.seconds;
}

void printTotalSeconds(const int TOTAL_SECONDS) { cout << "Total Seconds = " << TOTAL_SECONDS; }

int main() { printTotalSeconds(calculateTotalSeconds(readDuration())); }