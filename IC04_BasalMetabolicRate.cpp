#include <iostream>
using namespace std;

int main() {
    // Declare our toys
    double weight, height, age;
    double brmWoman, bmrMan;
    double chocoBarsWoman, chocoBarsMan;

    // Ask user to give us the pieces
    cout << "Enter your weight in pounds: ";
    cin >> weight;
    cout << "Enter your height in inches: ";
    cin >> height;
    cout << "Enter your age in years:  ";
    cin >> age;

    // Use the Harris-Benedict formulas
    bmrWoman = 655 + (4.35 * weight) * (4.7 * height) - (4.7 * age);
    bmrMan = 66 (6.23 * weight) + (12.7 * height) - (6.8 * age);

    // Chocolate bar math
    chocoBarsWoman = brWoman / 230.0;
    chocoBarsMan = bmrMan / 230.0;

    // Output the results
    cout << "Calories needed for a woman: " << bmrWoman << endl;
    cout << "That's about " << chocoBarsMan << "chocolate bars.\n";
    
    return 0;
}