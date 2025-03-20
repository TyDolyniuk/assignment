/******************************************************************************
# Author:           Ty Dolyniuk
# Assignment:       A8 (CS161A)
# Date:             March 19, 2025
# Description:      This program takes one initial input, goal, and then prompts
#                   the user for 7 more inputs. The program will then output
#                   whether or not the sum of the 7 inputs matches the initial
#                   input.
# Input:            int goal, int milesInADay
# Output:           int totalMiles
# Sources:          Final specifications
#******************************************************************************/

#include <iostream>

using namespace std;

//function prototypes
void getInput(int &goal);
int calcTotal();
void msgWelcome();
void msgGoodbye();

int main() {
    int goal;
    int totalMiles;

    msgWelcome();

    getInput(goal);

    if (!cin || goal <= 0) {
        cout << endl << "No miles were tracked this week." << endl;
    }
    else {
        totalMiles = calcTotal();

        cout << endl;

        cout << "You rode " << totalMiles << " miles this week." << endl;

        if (totalMiles == goal) {
            cout << "Good job! You met your goal!";
        }
        else if (totalMiles > goal) {
            cout << "Great job! You exceeded your goal by " << totalMiles - goal << " miles!";
        }
        else if (totalMiles < goal) {
            cout << "Uh oh! You missed your goal by " << goal - totalMiles << " miles!";
        }

        cout << endl;
    }
    
    msgGoodbye();

    return 0;
}

void getInput(int &goal) {
    cout << "How many miles do you want to ride this week? ";
    cin >> goal;
}

int calcTotal() {
    int totalMiles = 0;
    int milesInADay = 0;

    for (int i = 1; i <= 7;) {
        if (i == 1) {
            cout << "How many miles did you ride on Sunday? ";
        }
        else if (i == 2) {
            cout << "How many miles did you ride on Monday? ";
        }
        else if (i == 3) {
            cout << "How many miles did you ride on Tuesday? ";
        }
        else if (i == 4) {
            cout << "How many miles did you ride on Wednesday? ";
        }
        else if (i == 5) {
            cout << "How many miles did you ride on Thursday? ";
        }
        else if (i == 6) {
            cout << "How many miles did you ride on Friday? ";
        }
        else if (i == 7) {
            cout << "How many miles did you ride on Saturday? ";
        }

        cin >> milesInADay;
        if (!cin || milesInADay < 0) {
            cout << "Miles must be 0 or greater!" << endl;
        }
        else {
            totalMiles += milesInADay;
            ++i;
        }
    }

    return totalMiles;
}

void msgWelcome() {
    cout << "Welcome to my Miles Tracker program." << endl << endl;
}
void msgGoodbye() {
    cout << endl << "Keep riding!" << endl;
}