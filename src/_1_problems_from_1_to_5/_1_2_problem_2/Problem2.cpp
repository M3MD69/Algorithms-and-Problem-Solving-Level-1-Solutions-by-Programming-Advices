#include <iostream>
using namespace std;

void printName(const string NAME) { cout << "Your name is: " << NAME; }

string readName() {
    cout << "Enter your name:" << endl;
    string name;
    getline(
        cin,
        name
    );
    return name;
}

int main() { printName(readName()); }