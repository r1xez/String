#include <iostream>
#include <string>
using namespace std;

void countCharacters(const string& str, int& letterCount, int& digitCount, int& otherCount) {
    letterCount = 0; 
    digitCount = 0; 
    otherCount = 0; 

    for (char c : str) {
        // Перевірка, чи символ є літерою
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            letterCount++;
        }
       
        else if (c >= '0' && c <= '9') {
            digitCount++;
        }
        
        else {
            otherCount++;
        }
    }
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input); 

    int letterCount, digitCount, otherCount;
    countCharacters(input, letterCount, digitCount, otherCount);

    cout << "Letters: " << letterCount << endl; 
    cout << "Digits: " << digitCount << endl; 
    cout << "Other characters: " << otherCount << endl;

    return 0;
}
