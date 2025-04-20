#include <iostream>
#include <cmath>
using namespace std;

void readNumbers(float& radius) {
    cout << "Enter radius:" << endl;
    cin >> radius;
}

float calculateCircleArea(const float RADIUS) { return M_PI * RADIUS * RADIUS; }

void printCircleArea(const float CIRCLE_AREA) { cout << "Circle Area = " << CIRCLE_AREA; }

int main() {
    float radius;
    readNumbers(radius);
    printCircleArea(
        calculateCircleArea(radius)
    );
}