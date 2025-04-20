#include <iostream>
using namespace std;

void readNumbers(float& base, float& height) {
    cout << "Enter base:" << endl;
    cin >> base;

    cout << "Enter height:" << endl;
    cin >> height;
}

float calculateTriangleArea(const float BASE, const float HEIGHT) { return BASE / 2 * HEIGHT; }

void printTriangleArea(const float TRIANGLE_AREA) { cout << "Rectangle Area Through Diagonal and Side = " << TRIANGLE_AREA; }

int main() {
    float base,
          height;
    readNumbers(
        base,
        height
    );
    printTriangleArea(
        calculateTriangleArea(
            base,
            height
        )
    );
}