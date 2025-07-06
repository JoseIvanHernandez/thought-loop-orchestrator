#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Constants for membership prices and decimals
const double ADULT = 45.00;
const double SENIOR = 40.00;
const double FAMILY = 60.00;
const double YOUTH = 25.00;
const double STUDENT = 30.00;
const double MILITARY = 35.00;

const double JOINER_FEE = 50.00;
const double DISCOUNT = 0.10;

int main() {
    int choice, months;
    bool isNew, isMilitary;
    double monthlyRate = 0, total = 0, discountAmount = 0, joiner = JOINER_FEE;

    // Header graphics

    cout << "================================\n";
    cout << "   Welcome to YMCA Oceanside    \n";
    cout << "================================\n";
    cout << "1. Adult - $45\n";
    cout << "2. Senior - $40\n";
    cout << "3. Family - $60\n";
    cout << "4. Youth - $25\n";
    cout << "5. Student - $30\n";
    cout << "6. Military - $35\n";
    cout << "-------------------------------\n";

    cout << "Enter membership type (1-6): ";
    cin >> choice;

    cout << "Enter number of months: ";
    cin >> months;

    char temp;
    cout << "Are you a new member? (Y/N): ";
    cin >> temp;
    isNew = (toupper(temp) == 'Y');

    cout << "Are you military affiliated? (Y/N): ";
    cin >> temp;
    isMilitary = (toupper(temp) == 'Y');

    switch (choice) {
        case 1: monthlyRate = ADULT; break;
        case 2: monthlyRate = SENIOR; break;
        case 3: monthlyRate = FAMILY; break;
        case 4: monthlyRate = YOUTH; break;
        case 5: monthlyRate = STUDENT; break;
        case 6: monthlyRate = MILITARY; break;
        default:
        cout << "Invalid choice. Please select from the options above.\n";
        return 1;
    }

    if (isMilitary) {
        discountAmount = (monthlyRate * months) * DISCOUNT;
    joiner = 0;
}

total = (monthlyRate * months) - discountAmount + (isNew ? joiner : 0);

cout << fixed << setprecision(2);
cout << "\n==== YMCA Membership Summary ====\n";
cout << "Monthly rate: $" << monthlyRate << endl;
cout << "Months: " << months << endl;
if (isNew) cout << "Joiner fee: $" << joiner << endl;
if (isMilitary) cout << "Military discount: -$" << discountAmount << endl;
cout << "Total due: $" << total << endl;

return 0;

}