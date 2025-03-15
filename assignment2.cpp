/******************************************************************************
# Author:           Ty Dolyniuk
# Assignment:       A2 (CS161A)
# Date:             March 01, 2025
# Description:      This program reads numberOfCookies and outputs numberOfServings
#                   and caloriesConsumed
# Input:            int numberOfCookies
# Output:           double numberOfServings, caloriesConsumed
# Sources:          Assignment 2 specifications
#******************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int COOKIES_PER_SERVING = 5;
    int CALORIES_PER_SERVING = 160;
    int numberOfCookies;
    double numberOfServings;
    double caloriesConsumed;

    cout << "Welcome to the Oreo Serving Calculator!" << endl;
    cout << "Enter the number of Oreos eaten: ";
    cin >> numberOfCookies;

    numberOfServings = static_cast<float>(numberOfCookies) / static_cast<float>(COOKIES_PER_SERVING);
    caloriesConsumed = static_cast<float>(CALORIES_PER_SERVING) * static_cast<float>(numberOfServings);

    cout << numberOfCookies << " Oreos equals " << numberOfServings << " servings!" << endl;
    cout << "You consumed " << caloriesConsumed << " calories." << endl;
    cout << "Thanks for choosing Oreos!" << endl;
    return 0;
}
