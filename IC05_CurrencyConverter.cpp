#include <iostream>
#include <iomanip> // Needed for setw and setprecision
using namespace std;

// set our constants
const double PESOS_PER_DOLLAR = 17.02;
const double EUROS_PER_DOLLAR = 0.93;
const double YEN_PER_DOLLAR = 159.37;
const double GBP_PER_DOLLAR = 0.79;
const double BTC_PER_DOLLAR = 0.0000015;

void CurrencyConverter() {
    double usd;
    cout << "Enter amount in USD: $";
    cin >> usd;

    if (usd <= 0) {
        cout << "Error: Amount must be greater than zero." << endl;
        return;
    }

    cout << fixed << setprecision(2);
    cout << "\nConverted Currency Values:\n";
    cout << setw(20) << left << "Mexican Pesos:"   << "$" << usd * PESOS_PER_DOLLAR << endl;
    cout << setw(20) << left << "Euros:"           << "€" << usd * EUROS_PER_DOLLAR << endl;
    cout << setw(20) << left << "Japanese Yen:"    << "¥" << usd * YEN_PER_DOLLAR << endl;
    cout << setw(20) << left << "British Pounds:"  << "£" << usd * GBP_PER_DOLLAR << endl;
    cout << setw(20) << left << "Bitcoin:"         << usd * BTC_PER_DOLLAR << " BTC" << endl;
}

// Optional: Add a main function to test it
int main() {
    CurrencyConverter();
    return 0;
}
