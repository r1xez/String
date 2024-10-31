#include <iostream>
#include <string>
using namespace std;

int countCharacterOccurrences(const string& str, char ch) {
    int count = 0; 
    for (char c : str) { 
        if (c == ch) { 
            count++; 
        }
    }
    return count; 
}

int main() {
    string input;
    char searchChar;

    cout << "Enter a string: ";
    getline(cin, input); 

    cout << "Enter a character to search for: ";
    cin >> searchChar; 

    int occurrences = countCharacterOccurrences(input, searchChar); 

    cout << "The character '" << searchChar << "' seen " << occurrences << " times in the string." << endl; 

    return 0;
}
