# include <iostream>
# include <iomanip> // For Setprecision and Fixed manipulators

using namespace std;

int main() {
    // constant for Oceanside sales tax rate
    const double TAX_RATE = 0.0825;


    //Declares Variables
    double billAmount, tipPercent;
    double taxAmount, tipAmount, totalAmount;
    // Get input from the user
    cout << "Please enter amount of restaurant bill: $";
    cin >> billAmount;

    cout << "Please enter the tip percentage ($) ";
    cin >> tipPercent;

    // Convert tip perentage to decimal
    tipPercent /= 100.0;

    // Calculate tax, tip, and total
    taxAmount = billAmount * TAX_RATE;
    tipAmount = billAmount * tipPercent;
    totalAmount = billAmount + taxAmount + tipAmount;

    // Set formatting for currency 
    cout << fixed << setprecision(2);

    // Output results
    cout << "The total taxes are $" << taxAmount << endl;
    cout << "The tip amount is $" << tipAmount << endl;
    cout << "Te total amount to pay is $" << totalAmount << endl;

    return 0;
}