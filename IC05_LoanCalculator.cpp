#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void LoanCalculator() {
    double loanAmount, annualRate, monthlyRate, monthlyPayment;
    int numberOfPayments;

    // Input
    cout << "Enter loan amount (USD): ";
    cin >> loanAmount;

    cout << "Enter annual interest rate (e.g., 7.5): ";
    cin >> annualRate;

    cout << "Enter number of monthly payments: ";
    cin >> numberOfPayments;

    // Validation
    if (loanAmount <= 0 || annualRate <= 0 || numberOfPayments <= 0) {
        cout << "ERROR: All values must be greater than zero.\n";
        return;
    }

    // Convert annual rate to monthly decimal rate
    monthlyRate = (annualRate / 12.0) / 100.0;

    // Payment formula
    monthlyPayment = (loanAmount * monthlyRate * pow(1 + monthlyRate, numberOfPayments)) /
                     (pow(1 + monthlyRate, numberOfPayments) - 1);

    // Output
    cout << fixed << setprecision(2);
    cout << "\n--- Loan Payment Summary ---\n";
    cout << "Loan Amount: $" << loanAmount << endl;
    cout << "Annual Interest Rate: " << annualRate << "%" << endl;
    cout << "Monthly Interest Rate: " << monthlyRate * 100 << "%" << endl;
    cout << "Number of Payments: " << numberOfPayments << endl;
    cout << "Monthly Payment: $" << monthlyPayment << endl;
    cout << "Total Payment: $" << monthlyPayment * numberOfPayments << endl;
}

int main() {
    LoanCalculator();
    return 0;
}
