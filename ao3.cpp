/******************************************************************************
# Author:           Ty Dolyniuk
# Assignment:       A3 (CS161A)
# Date:             March 03, 2025
# Description:      This program displays a menu to the user, where the user can
#                   choose what they want and it will output the price of the
#                   transaction
# Input:            char vehicle, int numberOfAdults, numberOfSeniors,
#                   numberOfYouths, numberOfBikes
# Output:           double total, difference
# Sources:          Assignment 3 specifications
#******************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;
int main() {

    cout << "Welcome to the Washington State Ferries Fare Calculator!" << endl;
    cout << endl;
    cout << setw(55) << left << "Fare Description";
    cout << setw(7) << right << "Ticket $" << endl;
    cout << setfill('-') << setw(63) << "" << endl;
    cout << setfill(' ');
    cout << setw(55) << left << "Vehicle Under 14' (less than 168\") & Driver";
    cout << setw(7) << right << "$57.90" << endl;
    cout << setw(55) << left << "Adult (age 19 - 64)";
    cout << setw(7) << right << "$15.95" << endl;
    cout << setw(55) << left << "Senior (age 65 & over) / Disability";
    cout << setw(7) << right << "$7.40" << endl;
    cout << setw(55) << left << "Youth (age 6 - 18)";
    cout << setw(7) << right << "$5.55" << endl;
    cout << setw(55) << left << "Bicycle Surcharge (included with Vehicle)";
    cout << setw(7) << right << "$4.00" << endl;

    char vehicle;
    cout << endl;
    cout << "Are you riding a vehicle on the ferry (Y/N): ";
    cin >> vehicle;
    vehicle = tolower(vehicle);

    int numberOfAdults, numberOfSeniors, numberOfYouths;

    if (vehicle == 'y') {
        cout << "How many adults? ";
        cin >> numberOfAdults;

        if (numberOfAdults < 0) {
            cout << endl;
            cout << "Error!! Invalid answer!! Please try again later!!" << endl;
            cout << "Thank you for using Washington State Ferries Fare Calculator!" << endl;
            return 0;
        }

        cout << "How many seniors? ";
        cin >> numberOfSeniors;

        if (numberOfSeniors < 0) {
            cout << endl;
            cout << "Error!! Invalid answer!! Please try again later!!" << endl;
            cout << "Thank you for using Washington State Ferries Fare Calculator!" << endl;
            return 0;
        }

        cout << "How many youths? ";
        cin >> numberOfYouths;

        if (numberOfYouths < 0) {
            cout << endl;
            cout << "Error!! Invalid answer!! Please try again later!!" << endl;
            cout << "Thank you for using Washington State Ferries Fare Calculator!" << endl;
            return 0;
        }

        if (numberOfAdults + numberOfSeniors + numberOfYouths > 20) {
            cout << "Uh oh!! Too many people in your group. Split into 2 groups and try again!" << endl;
            cout << "Thank you for using Washington State Ferries Fare Calculator!" << endl;
            return 0;
        }

        double total = (numberOfAdults * 14.95) + (numberOfSeniors * 7.40) + (numberOfYouths * 5.55) + 57.90;
        double difference =  100.0 - total;

        cout << endl;
        cout << "Your total is $" << fixed << setprecision(2) << total << endl;
        cout << endl;

        if (total < 100) {
            cout << "If you spend $" << fixed << setprecision(2) << difference << " more, you are eligible for a free adult ticket for the next trip." << endl;
        }
        else {
            cout << "You get a free adult ticket for your next trip!" << endl;
        }
    }
    else if (vehicle == 'n') {
        cout << "How many adults? ";
        cin >> numberOfAdults;

        if (numberOfAdults < 0) {
            cout << endl;
            cout << "Error!! Invalid answer!! Please try again later!!" << endl;
            cout << "Thank you for using Washington State Ferries Fare Calculator!" << endl;
            return 0;
        }

        cout << "How many seniors? ";
        cin >> numberOfSeniors;

        if (numberOfSeniors < 0) {
            cout << endl;
            cout << "Error!! Invalid answer!! Please try again later!!" << endl;
            cout << "Thank you for using Washington State Ferries Fare Calculator!" << endl;
            return 0;
        }

        cout << "How many youths? ";
        cin >> numberOfYouths;

        if (numberOfYouths < 0) {
            cout << endl;
            cout << "Error!! Invalid answer!! Please try again later!!" << endl;
            cout << "Thank you for using Washington State Ferries Fare Calculator!" << endl;
            return 0;
        }

        int numberOfBikes;

        cout << "How many bikes? ";
        cin >> numberOfBikes;

        if (numberOfBikes < 0) {
            cout << endl;
            cout << "Error!! Invalid answer!! Please try again later!!" << endl;
            cout << "Thank you for using Washington State Ferries Fare Calculator!" << endl;
            return 0;
        }

        if (numberOfAdults + numberOfSeniors + numberOfYouths > 20) {
            cout << "Uh oh!! Too many people in your group. Split into 2 groups and try again!" << endl;
            cout << "Thank you for using Washington State Ferries Fare Calculator!" << endl;
            return 0;
        }

        double total = (numberOfAdults * 14.95) + (numberOfSeniors * 7.40) + (numberOfYouths * 5.55) + (numberOfBikes * 4.00);

        double difference =  100.0 - total;

        cout << endl;
        cout << "Your total is $" << fixed << setprecision(2) << total << endl;
        cout << endl;

        if (total < 100) {
            cout << "If you spend $" << fixed << setprecision(2) << difference << " more, you are eligible for a free adult ticket for the next trip." << endl;
        }
        else {
            cout << "You get a free adult ticket for your next trip!" << endl;
        }
    }
    else {
        cout << endl;
        cout << "Error!! Invalid answer!! Please try again later!!" << endl;
    }

    cout << endl;
    cout << "Thank you for using Washington State Ferries Fare Calculator!" << endl;

    return 0;
}
