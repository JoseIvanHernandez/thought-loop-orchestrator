#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Declare our toys
    double weight, height;
    int age;
    
    // Ask user to give us the pieces
    cout << "Enter your weight in pounds: ";
    cin >> weight;
    cout << "Enter your height in inches: ";
    cin >> height;
    cout << "Enter your age in years:  ";
    cin >> age;

    // Use the Harris-Benedict formulas
    double bmrWoman = 655 + (4.35 * weight) + (4.7 * height) - (4.7 * age);
    double bmrMan = 66 + (6.23 * weight) + (12.7 * height) - (6.8 * age);

    // Chocolate bar math
    double barsForWoman = bmrWoman / 230.0;
    double barsForMan = bmrMan / 230.0;

    // Output the results
    cout << fixed << setprecision(2);
    cout << "Calories needed per day\n";
    cout << "Woman: " << bmrWoman << " calories\n";
    cout << "Man:  " << bmrMan << "calories\n";
    
    cout << "Chocolate bars per day:\n";
    cout << "Woman: " << barsForWoman << " bars\n";
    cout << "Man  : " << barsForMan << " bars\n";
    
    return 0;

}