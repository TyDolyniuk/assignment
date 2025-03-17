/******************************************************************************
# Author:           Ty Dolyniuk
# Assignment:       A6 (CS161A)
# Date:             March 15, 2025
# Description:      A vending machine program that loops until the user inputs 0
#                   for coin insertion. It then brings up a menu for them to choose
#                   from.
# Input:            int coin, char option, char amountCheck
# Output:           float total
# Sources:          Assignment 6 specifications, textbook
#******************************************************************************/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    int coin = 0;
    float balance = 0;
    bool next = true;

    cout << "Welcome to my Coffee/Tea Vending Machine!" << endl;
    cout << fixed << setprecision(2);

    while (next) {
        cout << "Enter coins - 5, 10, or 25 only: ";
        cin >> coin;

        if (coin % 5 != 0 || coin > 25) {
            cout << "Invalid number!" << endl;
        }
        else {
            balance += coin;
            
            if (coin <= 0) {
                next = false;
                cout << endl;
            }
        }
    }

    balance = static_cast<float>(balance/100);
    cout << "Your balance is $" << balance << endl;

    char option;

    cout << endl << "Please pick an option ($0.25 each):" << endl;
    cout << "C/c: Coffee" << endl;
    cout << "T/t: Tea" << endl;
    cout << "Q/q: Quit" << endl;

    next = true;
    while (next) {
        cin >> option;
        option = tolower(option);
        if (option == 'c' || option == 't' || option == 'q') {
            next = false;
        }
        else {
            cout << "Invalid Option!" << endl;
        }
    }

    char amountCheck;
    int amount = 0;

    if (option == 'c' || option == 't') {
        while (amount == 0) {
            cout << "How many would you like?" << endl;
            cin >> amountCheck;

            if (isalpha(amountCheck) || amountCheck == 0) {
                cout << "Invalid Option!" << endl;
            }
            else {
                amount = amountCheck - '0';
                amount = static_cast<float>(amount);
            }
        }
    }
    float total = 0;
    total = static_cast<float>(amount * 0.25);
    cout << endl << "Your total is $" << total << endl;
    cout << "Your balance is $" << static_cast<float>(balance - total) << endl;
    cout << endl << "Thank you for using my Vending Machine Program!" << endl;
    return 0;
}
