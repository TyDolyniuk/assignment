/******************************************************************************
# Author:           Ty Dolyniuk
# Lab:              Discussion #8
# Date:             March 16, 2025
# Description:      This program displays a menu and asks the user to make a
#                   selection. A do-while loop repeats the program until the
#                   user selects item 4 from the menu.
# Input:            integer membership category, integer months
# Output:           float membership costs
# Sources:          None
#******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

//Constants


//Function protos
void welcome();
double readInp(string prompt);


int main() {
    welcome();

   return 0;
}

void welcome() {
    cout << "Welcome to the Monthly Budget and Expenses program!" << endl;
}