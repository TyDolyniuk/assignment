/******************************************************************************
# Author:           Ty Dolyniuk
# Assignment:       A8 (CS161A)
# Date:             March 16, 2025
# Description:      The user inputs the number of assignments and the scores for
#                   those assignments. Then they input the scores for their
#                   midterm and final. The program outputs the total score and
#                   their calculated letter grade.
# Input:            int numAssigns, assignment score, double midtermScore and
#                   finalExamScore
# Output:           double finalScore and char letterGrade
# Sources:          Assignment 8 specifications, textbook, sample A9
#******************************************************************************/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//constants
const double ASSIGN_WEIGHT = 0.6;
const double MIDTERM_WEIGHT = 0.2;
const double FINAL_WEIGHT = 0.2;

//function protos
void welcome();
int readInt(string prompt);
void readScore(string prompt, double &num);
double assignAverage(int numAssigns);
void getInput(double &midtermScore, double &finalExamScore);
double calcFinalScore(double assignAvg, double midtermScore, double finalExamScore);
void calcLetterGrade(double finalScore, char &letter);

int main() {
    welcome();

    int numAssigns;
    double assignAvg;
    double midtermScore;
    double finalExamScore;
    double finalScore;
    char letterGrade;

    cout << fixed << setprecision(1) << endl;
    numAssigns = readInt("Enter the number of assignments (0 to 10): ");
    assignAvg = assignAverage(numAssigns);
    cout << endl;
    getInput(midtermScore, finalExamScore);
    finalScore = calcFinalScore(assignAvg,midtermScore,finalExamScore);
    calcLetterGrade(finalScore,letterGrade);

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
void readScore(string prompt, double &num) {
    cout << prompt;
    cin >> num;

    while (!cin || num > 4 || num < 0) {
        cout << "Illegal Score! Please try again!";
        cin.clear();
        cin.ignore(100,'\n');
        cout << endl << prompt;
        cin >> num;
    }
}
double assignAverage(int numAssigns) {
    double totalScore = 0;

    for (int i = 1; i <= numAssigns; ++i) {
        double score;
        readScore("Enter score " + to_string(i) + ": ",score);

        totalScore += score;
    }

    return totalScore / numAssigns;
}
void getInput(double &midtermScore, double &finalExamScore) {
    readScore("Enter your midterm exam score: ", midtermScore);
    readScore("Enter your final exam score: ", finalExamScore);
}
double calcFinalScore(double assignAvg, double midtermScore, double finalExamScore) {
    return (assignAvg * ASSIGN_WEIGHT) + (midtermScore * MIDTERM_WEIGHT) + (finalExamScore * FINAL_WEIGHT);
}
void calcLetterGrade(double finalScore, char &letter) {
    if (finalScore >= 3.3) {
        letter = 'A';
    }
    else if (finalScore >= 2.8) {
        letter = 'B';
    }
    else if (finalScore >= 2.0) {
        letter = 'C';
    }
    else if (finalScore >= 1.2) {
        letter = 'D';
    }
    else if (finalScore < 1.2) {
        letter = 'F';
    }
}
