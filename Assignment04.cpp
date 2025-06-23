#include <iostream>
#include <iomanip>
using namespace std; // ❗️Fix: was written as "namespaces"

int main() {

    double tankCapacity, cityMPG, highwayMPG, gasPrice;
    
    cout << "What is the fuel capacity? ";
    cin >> tankCapacity;
    cout << "What is the city MPG? ";
    cin >> cityMPG;
    cout << "What is the highway MPG? ";
    cin >> highwayMPG;
    cout << "What is the price per gallon? ";
    cin >> gasPrice;

    cout << "Mile range city " << setprecision(0) << fixed << cityMPG * tankCapacity << endl;
    cout << "Mile range highway: "  << setprecision(0) << fixed << highwayMPG * tankCapacity << endl;
    cout << "Cost to fill tank: $" << fixed << setprecision(2) << gasPrice * tankCapacity << endl;

    return 0;
}