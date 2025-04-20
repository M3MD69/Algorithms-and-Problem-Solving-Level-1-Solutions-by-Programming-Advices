#include <iostream>
#include <cmath>
using namespace std;

void readSide(float& side) {
    cout << "Enter side:" << endl;
    cin >> side;
}

float calculateCircleAreaInscribedInSquare(const float SIDE) { return M_PI * pow(SIDE / 2, 2); }

void printCircleAreaInscribedInSquare(const float CIRCLE_AREA_INSCRIBED_IN_SQUARE) { cout << "Circle Area Inscribed Square = " << CIRCLE_AREA_INSCRIBED_IN_SQUARE; }

int main() {
    float side;
    readSide(side);
    printCircleAreaInscribedInSquare(
        calculateCircleAreaInscribedInSquare(side)
    );
}