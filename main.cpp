/******************************************************************************
# Author:           Ty Dolyniuk
# Assignment:       A1 Sample (CS161A)
# Date:             February 25, 2025
# Description:      ()
# Input:            (What the program asks for, and data type, e.g., string)
# Output:           (Summary of messages displayed by the program)
# Sources:          Assignment 1 specifications
#******************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int employeeID = 0;
    int hoursWorked = 0;
    int hourlyRate = 0;
    int federalWithholdingRate = 0;

    int totalGrossPay = 0;
    int federalTaxWithholding = 0;
    int netPay = 0;

    cout << "Welcome to the Weekly Payroll calculator program! Please input only whole numbers." << endl;

    cout << "Enter Employee ID: ";
    cin >> employeeID;
    cout << "Enter Hours Worked: ";
    cin >> hoursWorked;
    cout << "Enter Hourly Rate: ";
    cin >> hourlyRate;
    cout << "Enter Federal Withholding Rate: ";
    cin >> federalWithholdingRate;

    totalGrossPay = hoursWorked * hourlyRate;
    federalTaxWithholding = totalGrossPay * (federalWithholdingRate / 100.0);
    netPay = totalGrossPay - federalTaxWithholding;

    cout << endl;
    cout << "Payroll Summary:" << endl;
    cout << "TOTAL GROSS PAY: $" << totalGrossPay << endl;
    cout << "FEDERAL TAX WITHHOLDING: $" << federalTaxWithholding << endl;
    cout << "NET PAY: $" << netPay << endl;
    cout << endl;

    cout << "Thanks for using this calculator, please come again!";
    return 0;
}
