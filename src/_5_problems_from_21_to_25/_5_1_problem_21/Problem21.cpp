#include <iostream>
#include <cmath>
using namespace std;

void readCircumference(float& circumference) {
    cout << "Enter circumference:" << endl;
    cin >> circumference;
}

float calculateCircleAreaByCircumference(const float CIRCUMFERENCE) { return CIRCUMFERENCE * CIRCUMFERENCE / (4 * M_PI); }

void printCircleAreaByCircumference(const float CIRCLE_AREA_CIRCUMFERENCE) { cout << "Circle Area by Circumference = " << CIRCLE_AREA_CIRCUMFERENCE; }

int main() {
    float circumference;
    readCircumference(circumference);
    printCircleAreaByCircumference(
        calculateCircleAreaByCircumference(circumference)
    );
}