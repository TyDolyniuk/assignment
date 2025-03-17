/******************************************************************************
# Author:           Ty Dolyniuk
# Assignment:       A5 (CS161A)
# Date:             March 15, 2025
# Description:      
# Input:            
# Output:           
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

    while(next) {
        int numPeople = 0;
        float avgSlicePerPerson = 0.0;
        float costPerPizza = 0.0;

        cout << "Welcome to my Pizza Party Statistics program!" << endl;
        cout << endl << "Enter the number of people, average number of slices per person," << endl;
        cout << "and the cost of a pizza separated by a space: ";
        cin >> numPeople >> avgSlicePerPerson >> costPerPizza;

        int numberOfPizzas = ceil((numPeople * avgSlicePerPerson) / 8);
        float costOfPizzas = numberOfPizzas * costPerPizza;
        float tax = costOfPizzas * 0.07;
        float deliveryCost = (costOfPizzas + tax) * 0.2;
        float totalCost = costOfPizzas + tax + deliveryCost;

        numberEntries += 1;

        totalPizzaCount += numberOfPizzas;
        if(numPeople > maxPeople) {
            maxPeople = numPeople;
        }

        if(totalCost > maxCost) {
            maxCost = totalCost;
        }

        cout << "Do you want to enter more (y/n): ";
        char c;
        cin >> c;
        if(c != 'y') {
            next = false;
        }
    }

    cout << "Number of entries: " << numberEntries << endl;
    cout << "Average number of pizzas: " << (totalPizzaCount / static_cast<float>(numberEntries)) << endl;
    cout << "Maximum number of people: " << maxPeople << endl;
    cout << "Maximum cost of pizzas: " << maxCost << endl;

    cout << "Thank you for using my program!" << endl;
    return 0;
}
