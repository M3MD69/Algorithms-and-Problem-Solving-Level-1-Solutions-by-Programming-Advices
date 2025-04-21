#include <iostream>
#include <cmath>
using namespace std;

void readTriangleData(
    float& firstSide,
    float& secondSide,
    float& thirdSide
) {
    cout << "Enter First Side:" << endl;
    cin >> firstSide;

    cout << "Enter Second Side:" << endl;
    cin >> secondSide;

    cout << "Enter Third Side:" << endl;
    cin >> thirdSide;
}

float calculateCircleAreaDescribedAroundAnArbitraryTriangle(
    const float FIRST_SIDE,
    const float SECOND_SIDE,
    const float THIRD_SIDE
) {
    const float SEMI_PERIMETER = (FIRST_SIDE + SECOND_SIDE + THIRD_SIDE) / 2;
    return M_PI * pow(
        FIRST_SIDE * SECOND_SIDE * THIRD_SIDE /
        (4 *
            sqrt(
                SEMI_PERIMETER *
                (SEMI_PERIMETER - FIRST_SIDE) *
                (SEMI_PERIMETER - SECOND_SIDE) *
                (SEMI_PERIMETER - THIRD_SIDE)
            )
        ),
        2
    );
}

void printCircleAreaDescribedAroundAnArbitraryTriangle(const float CIRCLE_AREA_DESCRIBED_AROUND_AN_ARBITRARY_TRIANGLE) { cout << "Circle Area Described Around an Arbitrary Triangle = " << CIRCLE_AREA_DESCRIBED_AROUND_AN_ARBITRARY_TRIANGLE; }

int main() {
    float firstSide,
          secondSide,
          thirdSide;
    readTriangleData(
        firstSide,
        secondSide,
        thirdSide
    );
    printCircleAreaDescribedAroundAnArbitraryTriangle(
        calculateCircleAreaDescribedAroundAnArbitraryTriangle(
            firstSide,
            secondSide,
            thirdSide
        )
    );
}