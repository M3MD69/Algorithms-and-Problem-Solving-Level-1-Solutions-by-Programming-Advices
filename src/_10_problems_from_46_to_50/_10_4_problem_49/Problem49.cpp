#include <iostream>
using namespace std;

string readPIN_Code() {
    string pinCode;
    cout << "Enter PIN Code:" << endl;
    cin >> pinCode;
    return pinCode;
}

bool Login() {
    string pinCode;
    const string CORRECT_PIN_CODE = "1234";
    do {
        pinCode = readPIN_Code();
        if (pinCode != CORRECT_PIN_CODE)
            system("color 4F");
    } while (pinCode != CORRECT_PIN_CODE);
    return true;
}

int main() {
    if (Login()) {
        system("color 2F");
        cout << "Your account balance is " << 7500;
    }
}