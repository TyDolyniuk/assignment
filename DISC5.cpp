#include <iostream>
#include <iomanip>

using namespace std;
int main() {
    bool next = true;
    int count = 0;
    int maxNum = 0;
    int minNum = 0;
    int sum = 0;
    float avg;

    while (next) {
        int num;
        cout << "Enter integer: ";
        cin >> num;

        sum += num;
        count += 1;

        if (maxNum == 0 && minNum == 0) {
            maxNum = num;
            minNum = num;
        }
        else if (num > maxNum) {
            maxNum = num;
        }
        else if (num < minNum) {
            minNum = num;
        }

        cout << endl << "Do you want to enter more? (y/n): ";
        char c;
        cin >> c;
        if(tolower(c) != 'y') {
            next = false;
        }
        else {
            cout << endl;
        }
    }

    avg = static_cast<float>(sum/count);

    cout << "Sum: " << sum << endl;
    cout << fixed << setprecision(2) << "Average: " << avg << fixed << setprecision(0) << endl;
    cout << "Minimum: " << minNum << endl;
    cout << "Maximum: " << maxNum << endl;

    return 0;
}
