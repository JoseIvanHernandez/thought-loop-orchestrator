#include <iostream>
using namespace std;

// fraw knots using unctions

void drawKnots(int count) {
    if (count == 0) {
        cout << "--- (no knots)\n";
        return;
    }
    for (int i = 0; i < count; i++) {
        cout << "@ ";
    }
    cout << "\n";
}
int main() {
    int number;

    cout << "============================\n";
    cout << "      Inca Quipu Encode\n";
    cout << "============================\n";

    cout << "Enter a number (0-999): ";
    cin >> number;

    if (number < 0 || number > 999) {
        cout << "Error! Number out of range. Please enter between 0 and 9999.\n";
        return 1;
    }

    int hundreds = number / 100;
    int tens = (number / 10) % 10;
    int ones = number % 10;

    cout << "\nVisual Quipu for " << number << ":\n";
    cout << "Hundreds (" << hundreds << "): ";
    drawKnots(hundreds);

    cout << "Tens (" << tens << "):     ";
    drawKnots(tens);

    cout << "Ones (" << ones << ")     ";
    drawKnots(ones);

    return 0;
}