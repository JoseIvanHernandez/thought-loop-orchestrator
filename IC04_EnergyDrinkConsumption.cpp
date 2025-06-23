#include <iostream>
using namespace std;

int main() {
    // constants
    int totalCustomers = 16500;
    double percentBuyDrinks = 0.15;
    double percentCitrusLovers = 0.58;

    // calculated values
    int numBuyDrinks = totalCustomers * percentBuyDrinks;
    int numCitrusLovers = numBuyDrinks * percentCitrusLovers;

    // output of the results
    cout << "Approximate number of customer who buy energy drinks weekly: " << numBuyDrinks << endl;
    cout << "Approximate number who prefer citrus-flavored energy drinks: " << numCitrusLovers << endl;

    return 0;
    
}