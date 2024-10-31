#include <iostream>
#include <string>
using namespace std;

void countCharacters(const string& str, int& letters, int& digits, int& others) {
    letters = 0;
    digits = 0;
    others = 0;

    for (char c : str) {
        if (isalpha(c)) {
            ++letters;
        }
        else if (isdigit(c)) {
            ++digits;
        }
        else {
            ++others;
        }
    }
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    int letters, digits, others;
    countCharacters(input, letters, digits, others);

    cout << "Letters: " << letters << ", Digits: " << digits << ", Others: " << others << endl;

    return 0;
}
