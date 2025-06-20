# include <iostream>
# include <iomanip>

using namespace std;

int main() {
    // Constants
    const double TAX_RATE = 0.0825;

    // Declare variables to hold prices;
    double item1, item2, item3, item4, item5;

    // Prompt user for each item
    cout << "Enter the proce of item 1: $";
    cin >> item1;

    cout << "Enter the price of item 2: $";
    cin >> item2;

    cout << "Enter the price of item 3: $";
    cin >> item3;

    cout << "Enter the price of item 4: $";
    cin >> item4;

    cout << "Enter the price of item 5: $";
    cin >> item5;

    // Calculate subtotal
    double subtotal = item1 + item2 + item3 + item4 + item5;
    // Calculate tax
    double taxAmount = subtotal * TAX_RATE;
    // Calculate total
    double totalAmount = subtotal + taxAmount;
    // Calculate averaage
    double average = subtotal / 5;

    // Set output formatting for dollars
    cout << fixed << setprecision(2);

    // Display results
    cout << "Subtotal: $" << subtotal << endl;
    cout << "Sales Tax (8.25%): $" << taxAmount << endl;
    cout << "Total: $" << totalAmount << endl;
    cout << "Average price per item: $" << average << endl;

    return 0;       
}