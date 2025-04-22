#include <iostream>
using namespace std;

enum Month {
    Muharram = 1,
    Safar = 2,
    RabiAlAwwal = 3,
    RabiAlThani = 4,
    JumadaAlAwwal = 5,
    JumadaAlThani = 6,
    Rajab = 7,
    Shaban = 8,
    Ramadan = 9,
    Shawwal = 10,
    DhulQidah = 11,
    DhulHijjah = 12
};

short readNumber() {
    short number;
    do {
        cout << "Enter number (1:12):" << endl;
        cin >> number;
    } while (number < 1 || number > 12);
    return number;
}

Month readMonth() { return static_cast<Month>(readNumber()); }

string getMonthByNumber(const short DAY_BY_NUMBER) {
    switch (DAY_BY_NUMBER) {
    case Muharram:
        return "Muharram";
    case Safar:
        return "Safar";
    case RabiAlAwwal:
        return "Rabi Al-Awwal";
    case RabiAlThani:
        return "Rabi Al-Thani";
    case JumadaAlAwwal:
        return "Jumada Al-Awwal";
    case JumadaAlThani:
        return "Jumada Al-Thani";
    case Rajab:
        return "Rajab";
    case Shaban:
        return "Sha'ban";
    case Ramadan:
        return "Ramadan";
    case Shawwal:
        return "Shawwal";
    case DhulQidah:
        return "Dhul-Qi'dah";
    case DhulHijjah:
        return "Dhul-Hijjah";
    default:
        return "Unknown";
    }
}

int main() { cout << getMonthByNumber(readMonth()); }