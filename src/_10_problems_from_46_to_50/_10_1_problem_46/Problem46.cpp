#include <iostream>
using namespace std;

void printLettersFromAtoZ() {
    for (char character = 'A'; character <= 'Z'; ++character)
        cout << character << endl;
}

int main() { printLettersFromAtoZ(); }