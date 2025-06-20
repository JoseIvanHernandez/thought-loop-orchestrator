#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Constant for number of pay periods
    const int PAY_PERIODS = 26;

    // Variable to hold user-entered pay per period
    double payPerPeriod;

    // Variable to hold calculated annual pay
    double annualPay;

    // Ask user for their biweekly paycheck amount
    cout << "Enter your pay for each period: $";
    cin >> payPerPeriod;

    // Calculate total annual pay
    annualPay = payPerPeriod * PAY_PERIODS;

    // Display result formatted with $ and two decimal places
    cout << fixed << setprecision(2);  // Ensures two decimal places
    cout << "Your total annual pay is: $" << annualPay << endl;

    return 0;
}
