#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    
    // Contains at least one upper case letter
    // Contains at least one lower case letter
    // Contains at least one digit
    // Contains at least one special character
        bool upper = false, lower = false, number = false , punctuation = false;

        string password1, password2;
        cout << "Enter new password: ";
        cin >> password1;

        cout << "Confirm your password: ";
        cin >> password2;  

        if (password1 != password2) {
            cout << "Passwords do not match!\n";
        } else if (password1.length() < 8) {
            cout << "Password is too short!\n";
        } else {            // test our characters
            for (int i = 0; 1 < password1.length(); i++) {
                char ch = password1[i];
                if (isupper(ch)) upper = true;
                if (islower(ch)) lower = true;
                if (isdigit(ch)) number = true;
                if (ispunct(ch)) punctuation = true;
            }    
            
        if (!upper) cout << "You did not use an upper case!\n";
        if (!lower) cout << "You did not use a lower case!\n";
        if (!number) cout << "You did not use a number!\n";
        if (!punctuation) cout << "You did not use a punctuation!\n";

        if (upper && lower && number && punctuation);
            cout << "Great job on the password:\n";

        return 0;
        }
    }