#include <iostream>
#include <string>
using namespace std;

int countWords(const string& str) {
    int count = 0;
    bool inWord = false; 

    for (char c : str) {
       
        if (c != ' ' && c != '\t') {
            if (!inWord) {
                inWord = true; 
                ++count; 
            }
        }
        else {
            inWord = false;
        }
    }

    return count;
}

int main() {
    string input;
    cout << "Enter a sentence: ";
    getline(cin, input);

    int wordCount = countWords(input);
    cout << "Number of words: " << wordCount << endl;

    return 0;
}
