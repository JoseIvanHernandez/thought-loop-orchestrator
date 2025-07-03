// IC06BloodAlchoholContent.cpp
#include <iostream>
#include <iomanip>
using namespace std;

void BloodAlcoholContent() {
    const double OUNCES_ALCOHOL_PER_DRINK = 1.5;
    const double LEGAL_LIMIT = 0.08;

    int numberOfDrinks;
    double weight;

    cout << "Enter number of alcoholic drinks: ";
    cin >> numberOfDrinks;
    cout << "Enter your weight in pounds: ";
    cin >> weight;

    if (numberOfDrinks <= 0 || weight <= 0) {
        cout << "Error: Inputs must be greater than zero." << endl;
        return;
    }

    double BAC = (4.136 * numberOfDrinks * OUNCES_ALCOHOL_PER_DRINK) / weight;

    cout << fixed << setprecision(3);
    cout << "\n Your Blood Alcohol Content (BAC) is: " << BAC << endl;

    if (BAC >= LEGAL_LIMIT) {
        cout << "You are legeally intoxicated in California." << endl;
    } else {
        cout << "You are NOT legally intoxicated in California." << endl;
    }
}

int main() {
    BloodAlcoholContent();
    return 0;
}