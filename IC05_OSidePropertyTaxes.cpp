#include <iostream>
#include <iomanip>
using namespace std;

void PropertyTaxCalculator() {
    // Property tax rates (per $100 of assessed value)
    const double COUNTY_TAX = 1.00;
    const double CITY_TAX = 0.06;
    const double SCHOOL_TAX = 0.39;
    const double WATER_TAX = 0.08;
    const double SEWER_TAX = 0.04;
    const double MOSQUITO_TAX = 0.01;
    const double FIRE_TAX = 0.03;
    const double EMERGENCY_TAX = 0.02;

    double assessedValue;

    // Input: Assessed value of property
    cout << "Enter the assessed value of the home (USD): $";
    cin >> assessedValue;

    if (assessedValue <= 0) {
        cout << "Error: Assessed value must be greater than 0." << endl;
        return;
    }

    // Convert value to per $100
    double perHundred = assessedValue / 100.0;

    // Calculate each tax component
    double county = perHundred * COUNTY_TAX;
    double city = perHundred * CITY_TAX;
    double school = perHundred * SCHOOL_TAX;
    double water = perHundred * WATER_TAX;
    double sewer = perHundred * SEWER_TAX;
    double mosquito = perHundred * MOSQUITO_TAX;
    double fire = perHundred * FIRE_TAX;
    double emergency = perHundred * EMERGENCY_TAX;

    // Total tax and installments
    double totalTax = county + city + school + water + sewer + mosquito + fire + emergency;
    double installment = totalTax / 2.0;

    // Output results
    cout << fixed << setprecision(2);
    cout << "\n--- Oceanside Property Tax Breakdown ---\n";
    cout << setw(25) << left << "County Tax:" << "$" << county << endl;
    cout << setw(25) << left << "City Tax:" << "$" << city << endl;
    cout << setw(25) << left << "School Tax:" << "$" << school << endl;
    cout << setw(25) << left << "Water District Tax:" << "$" << water << endl;
    cout << setw(25) << left << "Sewer Tax:" << "$" << sewer << endl;
    cout << setw(25) << left << "Mosquito Abatement Tax:" << "$" << mosquito << endl;
    cout << setw(25) << left << "Fire District Tax:" << "$" << fire << endl;
    cout << setw(25) << left << "Emergency Services Tax:" << "$" << emergency << endl;

    cout << "\nTotal Property Tax: $" << totalTax << endl;
    cout << "Each Installment (2x/year): $" << installment << endl;
}

// Optional: main for testing
int main() {
    PropertyTaxCalculator();
    return 0;
}
