#include <iostream>
#include <cmath>
using namespace std;

void readDiameter(float& diameter) {
    cout << "Enter diameter:" << endl;
    cin >> diameter;
}

float calculateCircleAreaThroughDiameter(const float DIAMETER) { return M_PI * DIAMETER * DIAMETER / 4; }

void printCircleAreaThroughDiameter(const float CIRCLE_AREA_THROUGH_DIAMETER) { cout << "Circle Area Through Diameter = " << CIRCLE_AREA_THROUGH_DIAMETER; }

int main() {
    float diameter;
    readDiameter(diameter);
    printCircleAreaThroughDiameter(
        calculateCircleAreaThroughDiameter(diameter)
    );
}