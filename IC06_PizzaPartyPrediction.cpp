#include <iostream>
#include <iomanip>
#include <cmath> // for math functions
using namespace std;

void PizzaPartyPrediction() {
    const double SLICE_AREA = 14.125;
    const double PIZZA_PER_PERSON = 2.5;

    double diameter, numPeople;

    // Get input from user
    cout << "Enter the diameter of the pizza (in inches) ";
    cin >> diameter;

    cout << "Enter the number of people at the party: ";
    cin >> numPeople;

    // Calculate radius and area
    double radius = diameter / 2.0;
    double area = M_PI * pow(radius, 2);

    // Number of slices per pizza
    double slicesPerPizza = area / SLICE_AREA;

    // Total slices needed
    double totalSlicesNeeded = numPeople * PIZZA_PER_PERSON;

    // Number of pizzas to order
    double pizzasNeeded = totalSlicesNeeded / slicesPerPizza;
    
    // Output
    cout << fixed << setprecision(1);
    cout << "\nEach pizza can be cut into " << slicesPerPizza << " slices.\n";
    cout << "To feed " << numPeople << " people, you need about "
         << pizzasNeeded << " pizzas.\n";
}

// Mian function 
int main() {
    PizzaPartyPrediction();
    return 0;   
}