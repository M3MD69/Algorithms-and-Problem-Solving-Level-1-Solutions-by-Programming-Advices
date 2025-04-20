#include <iostream>
#include <cmath>
using namespace std;

void readNumbers(float& diameter) {
    cout << "Enter diameter:" << endl;
    cin >> diameter;
}

float calculateCircleAreaThroughDiameter(const float DIAMETER) { return M_PI * DIAMETER * DIAMETER / 4; }

void printCircleAreaThroughDiameter(const float CIRCLE_AREA) { cout << "Circle Area Through Diameter = " << CIRCLE_AREA; }

int main() {
    float diameter;
    readNumbers(diameter);
    printCircleAreaThroughDiameter(
        calculateCircleAreaThroughDiameter(diameter)
    );
}