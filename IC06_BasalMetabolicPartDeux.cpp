#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void BasalMetabolicRateCalculator() {
    const double CHOCOLATE_BAR_CALORIES = 230.0;

    string gender;
    int age;
    double weight, height, bmr, adjustedBmr;
    int activityLevel;

    // Prompt for user info
    cout << "Enter gender (Male/Female): ";
    cin >> gender;

    cout << "Enter age in years: ";
    cin >> age;

    cout << "Enter weight in pounds: ";
    cin >> weight;

    cout << "Enter height in inches: ";
    cin >> height;

    cout << "\nSelect activity level:\n";
    cout << "1. Sedentary (not active)\n";
    cout << "2. Somewhat active (exercise occasionally)\n";
    cout << "3. Active (exercise 3-4 times/week)\n";
    cout << "4. Highly Active (exercise every day)\n";
    cout << "Enter a number (1-4): ";
    cin >> activityLevel;

    // Calculate BMR based on gender
    if (gender == "Female" || gender == "female") {
        bmr = 655 + (4.35 * weight) + (4.7 * height) - (4.7 * age);
    } else if (gender == "Male" || gender == "male") {
        bmr = 66 + (6.23 * weight) + (12.7 * height) - (6.8 * age);
    } else {
        cout << "Invalid gender input.\n";
        return;
    }

    // Adjust BMR based on activity level
    switch (activityLevel) {
        case 1: adjustedBmr = bmr * 1.2; break;
        case 2: adjustedBmr = bmr * 1.3; break;
        case 3: adjustedBmr = bmr * 1.4; break;
        case 4: adjustedBmr = bmr * 1.5; break;
        default: 
            cout << "Invalid activity level.\n";
            return;
    }

    double numBars = adjustedBmr / CHOCOLATE_BAR_CALORIES;

    cout << fixed << setprecision(2);
    cout << "\nYour adjusted BMR is: " << adjustedBmr << " calories/day\n";
    cout << "You would need approximately " << numBars << " chocolate bars to maintain your weight.\n";
}

int main() {
    BasalMetabolicRateCalculator();
    return 0;
}
