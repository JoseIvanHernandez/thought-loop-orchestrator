#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string number;
    std::cout << "Enter a non-negative integer: ";
    std::cin >> number;

    // Input validation
    for (char ch : number) {
        if (!isdigit(ch)) {
            std::cout << "Invalid input! Please enter a non-negative integer.\n";
            return 1;
        }
    }

    // Convert each digit to its knot count (O's) and store as strings
    std::vector<std::string> columns;
    int maxKnots = 0;

    for (char ch : number) {
        int knots = ch - '0';
        maxKnots = std::max(maxKnots, knots);

        std::string col = "";
        for (int i = 0; i < knots; ++i) {
            col += "O";
        }
        columns.push_back(col);
    }

    // Print the vertical quipu
    std::cout << "\nInca Quipu (Vertical Format):\n";
    for (int row = 0; row < maxKnots; ++row) {
        for (const std::string& col : columns) {
            if (col.length() >= maxKnots - row)
                std::cout << "O ";
            else
                std::cout << "  ";
        }
        std::cout << "\n";
    }

    return 0;
}
