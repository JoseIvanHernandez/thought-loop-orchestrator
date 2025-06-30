#include <iostream>
using namespace std;


// Instead of creating seperate files, I created a menu that allows
// user to select the assignment they want to run.
// This is a simple way to run multiple assignments in one file.
// so be sure to compile and then run this file to see the menu in action.
// Declare function at the top
void RomanNumeralConverter();
void BodyMassIndexCalculator();
void HackerChallengeCaesarCipher();

int main() {
    int choice;

    cout << "Choose a program to run:\n";
    cout << "1. Roman Numeral Converter\n";
    cout << "2. Body Mass Index Calculator\n";
    cout << "3. Hacker Challenge (Custom)\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            RomanNumeralConverter();
            break;
        case 2:
            BodyMassIndexCalculator(); // this is the function call
        // This is where we call BodyMassIndexCalculator()
            break;
        case 3:
            HackerChallengeCaesarCipher(); // this is a function
        // This is where we call HackerChallengeCaesarCipher()    
            break;
        default:
            cout << "Invalid selection.\n";
    }

    return 0;
}

// Move your function implementation down here
void RomanNumeralConverter() {
    int number;
    cout << "[Roman Numeral Converter]\n";
    cout << "Enter a number between 1 and 10: ";
    cin >> number;

    switch (number) {
        case 1: cout << "Roman numeral: I\n"; break;
        case 2: cout << "Roman numeral: II\n"; break;
        case 3: cout << "Roman numeral: III\n"; break;
        case 4: cout << "Roman numeral: IV\n"; break;
        case 5: cout << "Roman numeral: V\n"; break;
        case 6: cout << "Roman numeral: VI\n"; break;
        case 7: cout << "Roman numeral: VII\n"; break;
        case 8: cout << "Roman numeral: VIII\n"; break;
        case 9: cout << "Roman numeral: IX\n"; break;
        case 10: cout << "Roman numeral: X\n"; break;
        default: cout << "Invalid number. Must be between 1 and 10.\n";
    }
}
void BodyMassIndexCalculator() { // Function to calculate Body Mass Index
    double weight, height;
    cout << "Enter weight in pounds: ";
    cin >> weight;
    if (weight <= 0) {
        cout << "Error: Weight must be greater than 0.\n";
        return;
    }
    cout << "Enter height in inches: ";
    cin >> height;
    if (height <= 0) {
        cout << "Error: Height must be greater than 0.\n";
        return;
    }
    double bmi = (weight * 703) / (height * height);
    cout << "Your BMI is: " << bmi << endl;
    if (bmi < 18.5)
        cout << "Underweight" << endl;
    else if (bmi < 25)
        cout << "Normal weight" << endl;
    else if (bmi < 30)
        cout << "Overweight" << endl;
    else
        cout << "Obese" << endl;
}

void HackerChallengeCaesarCipher() {
    string message;
    string cipherText = "";

    cout << "\n[Hacker Challenge - Caesar Cipher]\n";
    cout << "Enter a plain text message: ";
    cin.ignore(); // clear input buffer for full getline()
    getline(cin, message);

    for (char ch : message) {
        cipherText += static_cast<char>(ch - 3); // Caesar shift -3
    }

    cout << "The cipher text message (using Caesar cipher) is: " << cipherText << "\n";
}
