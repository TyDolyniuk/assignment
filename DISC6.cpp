#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    string inputWord;
    string word;
    string reversed;
    cout << "Enter word to check if palindrome: ";
    getline(cin,inputWord);

    word = inputWord;
    for (int i = 0; i < word.length();++i) {
        word[i] = tolower(word[i]);
    }

    reversed = word;
    reverse(reversed.begin(),reversed.end());

    if (word == reversed) {
        cout << inputWord << " is a palindrome!" << endl;
    }
    else {
        cout << inputWord << " is not a palindrome." << endl;
    }

    return 0;
}
