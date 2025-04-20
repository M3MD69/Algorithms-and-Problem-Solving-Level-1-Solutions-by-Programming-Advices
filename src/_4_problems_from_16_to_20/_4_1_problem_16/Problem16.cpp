#include <cmath>
#include <iostream>
using namespace std;

void readNumbers(float& diagonal, float& side) {
    cout << "Enter diagonal:" << endl;
    cin >> diagonal;

    cout << "Enter side:" << endl;
    cin >> side;
}

float calculateRectangleAreaThroughDiagonalAndSide(const float DIAGONAL, const float SIDE) { return SIDE * sqrt(DIAGONAL * DIAGONAL - SIDE * SIDE); }

void printRectangleAreaThroughDiagonalAndSide(const float RECTANGLE_AREA_THROUGH_DIAGONAL_AND_SIDE) { cout << "Rectangle Area Through Diagonal and Side = " << RECTANGLE_AREA_THROUGH_DIAGONAL_AND_SIDE; }

int main() {
    float diagonal,
          side;
    readNumbers(
        diagonal,
        side
    );
    printRectangleAreaThroughDiagonalAndSide(
        calculateRectangleAreaThroughDiagonalAndSide(
            diagonal,
            side
        )
    );
}