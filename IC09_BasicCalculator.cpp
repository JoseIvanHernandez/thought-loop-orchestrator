#include <iostream>
#include <cmath>        // for pow()
#include <iomanip>
using namespace std;

int main() {
    char op;
    double num1, num2, result;

    // Calculator Header
    cout << "==============================\n";
    cout << "      Jose's Basic Calculator\n";
    cout << "==============================\n";

    cout << "Enter operator (+, -, *, /, %, ^): ";
    cin >> op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << fixed << setprecision(2);

    switch(op) {
        case '+':
            result = num1 + num2;
            cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
            break;
        case '/':
            if (num2 == 0) {
                cout << "Error! Division by zero is not allowed." << endl;
            } else {
                result = num1 / num2;
                cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
            }
            break;
        case '%':
            if (static_cast<int>(num2) == 0) {
                cout << "Error! Division by zero is not allowed." << endl;
            } else {
                result = static_cast<int>(num1) % static_cast<int>(num2);
                cout << "Result: " << static_cast<int>(num1) << " % " << static_cast<int>(num2)
                     << " = " << result << endl;
            }
            break;
        case '^':
            result = pow(num1, num2);
            cout << "Result: " << num1 << " ^ " << num2 << " = " << result << endl;
            break;
        default:
            cout << "Error! Operator undefined in this version of the calculator." << endl;
    }

    return 0;
}
