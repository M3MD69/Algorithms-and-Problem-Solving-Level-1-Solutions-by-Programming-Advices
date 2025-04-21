#include <iostream>
#include <cmath>
using namespace std;

void readTriangleData(float& equalSidesLength, float& base) {
    cout << "Enter Equal Sides Length:" << endl;
    cin >> equalSidesLength;

    cout << "Enter Base:" << endl;
    cin >> base;
}

float calculateCircleAreaInscribedInIsoscelesTriangle(
    const float EQUAL_SIDES_LENGTH,
    const float BASE
) {
    return M_PI *
        pow(BASE, 2) / 4 *
        (
            (2 * EQUAL_SIDES_LENGTH - BASE) /
            (2 * EQUAL_SIDES_LENGTH + BASE)
        );
}

void printCircleAreaInscribedInIsoscelesTriangle(const float CIRCLE_AREA_INSCRIBED_IN_ISOSCELES_TRIANGLE) { cout << "Circle Area Inscribed in Isosceles Triangle = " << CIRCLE_AREA_INSCRIBED_IN_ISOSCELES_TRIANGLE; }

int main() {
    float equalSidesLength,
          base;
    readTriangleData(
        equalSidesLength,
        base
    );
    printCircleAreaInscribedInIsoscelesTriangle(
        calculateCircleAreaInscribedInIsoscelesTriangle(
            equalSidesLength,
            base
        )
    );
}