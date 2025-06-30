#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void PropertyTaxWithExemptions() {
    const double GENERAL_TAX_RATE = 0.0111;
    const double EDUCATION_TAX_RATE = 0.0037;
    const double EMERGENCY_TAX_RATE = 0.0021;
    const double INFRASTRUCTURE_TAX_RATE = 0.0016;

    const double PRIMARY_RESIDENCE_EXEMPTION = 7000;
    const double VETERAN_EXEMPTION = 4000;
    const double DISABLED_VETERAN_EXEMPTION = 126380;
    const double DISABLED_VETERAN_LOW_INCOME_EXEMPTION = 189571;

    double assessedValue;
    char primary, veteranType;

    // Input assessed value
    cout << "Enter the assessed value of your home (USD): ";
    cin >> assessedValue;

    if (assessedValue <= 0) {
        cout << "ERROR: Assessed value must be greater than zero.\n";
        return;
    }

    // Apply primary residence exemption
    cout << "Is this your primary residence? (y/n): ";
    cin >> primary;
    if (tolower(primary) == 'y') {
        assessedValue -= PRIMARY_RESIDENCE_EXEMPTION;
    }

    // Ask about veteran status
    cout << "\nVeteran Status (enter one):\n";
    cout << "  n - Not a Veteran\n";
    cout << "  v - Veteran\n";
    cout << "  d - Disabled Veteran\n";
    cout << "  l - Disabled Veteran (Low Income)\n";
    cout << "Your selection: ";
    cin >> veteranType;

    switch (tolower(veteranType)) {
        case 'v':
            assessedValue -= VETERAN_EXEMPTION;
            break;
        case 'd':
            assessedValue -= DISABLED_VETERAN_EXEMPTION;
            break;
        case 'l':
            assessedValue -= DISABLED_VETERAN_LOW_INCOME_EXEMPTION;
            break;
        case 'n':
        default:
            break;
    }

    // Re-validate assessed value
    if (assessedValue < 0) assessedValue = 0;

    // Calculate components
    double generalTax = assessedValue * GENERAL_TAX_RATE;
    double educationTax = assessedValue * EDUCATION_TAX_RATE;
    double emergencyTax = assessedValue * EMERGENCY_TAX_RATE;
    double infrastructureTax = assessedValue * INFRASTRUCTURE_TAX_RATE;
    double totalTax = generalTax + educationTax + emergencyTax + infrastructureTax;
    double installment = totalTax / 2;

    // Output
    cout << fixed << setprecision(2);
    cout << "\n--- Oceanside Property Tax with Exemptions ---\n";
    cout << "Adjusted Assessed Value: $" << assessedValue << "\n";
    cout << "General Tax: $" << generalTax << "\n";
    cout << "Education Tax: $" << educationTax << "\n";
    cout << "Emergency Services Tax: $" << emergencyTax << "\n";
    cout << "Infrastructure Tax: $" << infrastructureTax << "\n";
    cout << "---------------------------------------------\n";
    cout << "Total Property Tax: $" << totalTax << "\n";
    cout << "Installment (2x/year): $" << installment << "\n";
}

int main() {
    PropertyTaxWithExemptions();
    return 0;
}
