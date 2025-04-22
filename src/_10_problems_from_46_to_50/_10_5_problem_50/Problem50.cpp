#include <iostream>
using namespace std;

string readPIN_Code() {
    string pinCode;
    cout << "Enter PIN Code:" << endl;
    cin >> pinCode;
    return pinCode;
}

bool Login() {
    const string CORRECT_PIN_CODE = "1234";
    for (int failureCounter = 0; failureCounter < 3; ++failureCounter)
        if (readPIN_Code() != CORRECT_PIN_CODE) {
            system("color 4F");
            cout << "Wrong PIN" << endl;
        } else {
            system("color 2F");
            return true;
        }
    return false;
}

int main() {
    if (Login())
        cout << "Your account balance is " << 7500;
    else
        cout << "Card is locked!";
}