/******************************************************************************
# Author:           Ty Dolyniuk
# Assignment:       A7 (CS161A)
# Date:             March 16, 2025
# Description:      The user inputs the number of assignments and the scores for
#                   those assignments. Then they input the scores for their
#                   midterm and final. The program outputs the total score and
#                   their calculated letter grade.
# Input:            int numAssigns, assignment score, double midterm and final
# Output:           double finalScore and char letterGrade
# Sources:          Assignment 7 specifications, textbook, sample A8
#******************************************************************************/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//function protos
void welcome();
int readInt(string prompt);
double readScore(string prompt);
double assignAverage(int numAssigns);
double calcFinalScore(double assignAvg, double midterm, double final);
char calcLetterGrade(double finalScore);

int main() {
    welcome();

    int numAssigns;
    double assignAvg;
    double midterm;
    double final;
    double finalScore;
    char letterGrade;

    cout << fixed << setprecision(1) << endl;
    numAssigns = readInt("Enter the number of assignments (0 to 10): ");
    assignAvg = assignAverage(numAssigns);
    cout << endl;
    midterm = readScore("Enter your midterm exam score: ");
    final = readScore("Enter your final exam score: ");
    finalScore = calcFinalScore(assignAvg,midterm,final);
    letterGrade = calcLetterGrade(finalScore);

    cout << endl << "Your Final Numeric score is " << finalScore << endl;
    cout << "Your Final Grade is " << letterGrade << endl;
    cout << endl << "Thank you for using my Grade Calculator!" << endl;

    return 0;
}
void welcome() {
    cout << "Welcome to my Final Grade Calculator!" << endl;
    cout << "Please enter the following information and I will calculate your" << endl;
    cout << "Final Numerical Grade and Letter Grade for you!" << endl;
    cout << "The number of assignments must be between 0 and 10." << endl;
    cout << "All scores entered must be between 0 and 4." << endl;
}
int readInt(string prompt) {
    int userInput;
    cout << prompt;
    cin >> userInput;

    while (!cin || userInput > 10 || userInput < 0) {
        cout << "Not an integer or illegal number!";
        cin.clear();
        cin.ignore(100,'\n');
        cout << endl << prompt;
        cin >> userInput;
    }

    cin.ignore(50,'\n');
    return userInput;
}
double readScore(string prompt) {
    float userInput;
    cout << prompt;
    cin >> userInput;

    while (!cin || userInput > 4 || userInput < 0) {
        cout << "Illegal Score! Please try again!";
        cin.clear();
        cin.ignore(100,'\n');
        cout << endl << prompt;
        cin >> userInput;
    }

    return userInput;
}
double assignAverage(int numAssigns) {
    double totalScore = 0;

    for (int i = 1; i <= numAssigns; ++i) {
        double score = readScore("Enter score " + to_string(i) + ": ");

        totalScore += score;
    }

    return totalScore / numAssigns;
}
double calcFinalScore(double assignAvg, double midterm, double final) {
    return (assignAvg * 0.6) + (midterm * 0.2) + (final * 0.2);
}
char calcLetterGrade(double finalScore) {
    char grade;
    if (finalScore >= 3.3) {
        grade = 'A';
    }
    else if (finalScore >= 2.8) {
        grade = 'B';
    }
    else if (finalScore >= 2.0) {
        grade = 'C';
    }
    else if (finalScore >= 1.2) {
        grade = 'D';
    }
    else if (finalScore < 1.2) {
        grade = 'F';
    }

    return grade;
}
