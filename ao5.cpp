/******************************************************************************
# Author:           Ty Dolyniuk
# Assignment:       A5 (CS161A)
# Date:             March 15, 2025
# Description:      Program will ask for three inputs that will be used to
#                   calculate the statistics for amount of people, total cost,
#                   and averages.
# Input:            int numPeople, float avgSlicePerPerson, costPerPizza, char c
# Output:           int numberEntries, totalPizzaCoumt, maxPeople, float maxCost
# Sources:          Assignment 5 specifications, textbook
#******************************************************************************/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    int numberEntries = 0;
    int totalPizzaCount = 0;
    int maxPeople = 0;
    float maxCost = 0.0;

    bool next = true;

    cout << "Welcome to my Pizza Party Statistics program!" << endl;

    while(next) {
        int numPeople = 0;
        float avgSlicePerPerson = 0.0;
        float costPerPizza = 0.0;

        cout << endl << "Enter the number of people, average number of slices per person," << endl;
        cout << "and the cost of a pizza separated by a space: ";
        cin >> numPeople >> avgSlicePerPerson >> costPerPizza;

        if (numPeople <= 0 || avgSlicePerPerson <= 0 || costPerPizza <= 0) {
            cout << endl << "ERROR! Values must be greater than 0!" << endl;
        }
        else {
            int numberOfPizzas = ceil((numPeople * avgSlicePerPerson) / 8);
            float costOfPizzas = numberOfPizzas * costPerPizza;
            float tax = costOfPizzas * 0.07;
            float deliveryCost = (costOfPizzas + tax) * 0.2;
            float totalCost = costOfPizzas + tax + deliveryCost;

            cout << fixed << setprecision(2);

            numberEntries += 1;

            totalPizzaCount += numberOfPizzas;
            if(numPeople > maxPeople) {
                maxPeople = numPeople;
            }

            if(totalCost > maxCost) {
                maxCost = totalCost;
            }

            cout << endl << setw(20) << left << "Number of pizzas:";
            cout << setw(10) << right << numberOfPizzas << endl;
            cout << setw(20) << left << "Cost of pizzas:";
            cout << setw(10) << right << "$" << costOfPizzas << endl;
            cout << setw(20) << left << "Tax:";
            cout << setw(10) << right << "$" << tax << endl;
            cout << setw(20) << left << "Delivery:";
            cout << setw(10) << right << "$" << deliveryCost << endl;
            cout << setw(20) << left << "Total Cost:";
            cout << setw(10) << right << "$" << totalCost << endl;
        }

        cout << endl << "Do you want to enter more (y/n): ";
        char c;
        cin >> c;
        if(tolower(c) != 'y') {
            next = false;
        }
    }

    cout << endl << "Number of entries: " << numberEntries << endl;
    cout << "Total number of pizzas: " << totalPizzaCount << endl;
    cout << fixed << setprecision(1) << "Average number of pizzas: " << (totalPizzaCount / static_cast<float>(numberEntries)) << endl;
    cout << "Maximum number of people: " << maxPeople << endl;
    cout << fixed << setprecision(2) << "Maximum cost of pizzas: $" << maxCost << endl;

    cout << endl << "Thank you for using my program!" << endl;
    return 0;
}
