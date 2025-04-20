#include <iostream>
using namespace std;

void readNumbers(float& length, float& width) {
    cout << "Enter length:" << endl;
    cin >> length;

    cout << "Enter width:" << endl;
    cin >> width;
}

float calculateRectangleArea(const float LENGTH, const float WIDTH) { return LENGTH * WIDTH; }

void printRectangleArea(const float RECTANGLE_AREA) { cout << "Rectangle Area = " << RECTANGLE_AREA; }

int main() {
    float length, width;
    readNumbers(length, width);
    printRectangleArea(calculateRectangleArea(length, width));
}