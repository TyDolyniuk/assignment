/******************************************************************************
# Author:           Ty Dolyniuk
# Assignment:       A4 (CS161A)
# Date:             March 08, 2025
# Description:      This program gets two string inputs from the user, and sees
#                   if the two strings match. If they do match, show the match
#                   and where the match is. If there's no match, output no match.
# Input:            string phrase1, phrase2
# Output:           string phrase1, phrase2
# Sources:          Assignment 4 specifications, textbook
#******************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    cout << "Welcome to the Phrases and Subphrases program!" << endl;

    string phrase1, phrase2;

    cout << "Enter phrase 1: ";
    getline(cin, phrase1);
    cout << "You entered: " << phrase1 << endl;
    cout << "Enter phrase 2: ";
    getline(cin, phrase2);
    cout << "You entered: " << phrase2 << endl;

    cout << endl;

    int find1 = phrase2.find(phrase1);
    int find2 = phrase1.find(phrase2);

    if (phrase1 == phrase2) {
        cout << "Both phrases match." << endl;
    }
    else if (find1 != string::npos) {
        cout << phrase1 << " is found in " << phrase2 << endl;
        cout << phrase2.substr(find1) << endl;
    }
    else if (find2 != string::npos) {
        cout << phrase2 << " is found in " << phrase1 << endl;
        cout << phrase1.substr(find2) << endl;
    }
    else {
        cout << "No match." << endl;
    }

    cout << endl;
    cout << "Thank you for using my program!" << endl;
    return 0;
}
