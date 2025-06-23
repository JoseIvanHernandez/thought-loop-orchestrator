#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int numShares;
    double pricePerShare, commissionRate;
    double stockCost, commissionAmount, totalCost;

    // Ask user for input
    cout << "Enter the number of shares: ";
    cin >> numShares;

    cout << "Enter the price per share: $";
    cin >> pricePerShare;

    cout << "Enter the commission percentage: ";
    cin >> commissionRate;

    // Calculate
    stockCost = numShares * pricePerShare;
    commissionAmount = stockCost * (commissionRate / 100);
    totalCost = stockCost + commissionAmount;

    // Show results
    cout << fixed << setprecision(2); // show 2 decimal places
    cout << "Amount paid for the stock: $" << stockCost << endl;
    cout << "Commission paid: $" << commissionAmount << endl;
    cout << "Total amount paid: $" << totalCost << endl;

    return 0;
}
