#include <iostream>
#include <string>
using namespace std;

string removeAllOccurrences(const string& str, char toRemove) {
    string result; 

    for (char ch : str) {
        if (ch != toRemove) { 
            result += ch;
        }
    }

    return result; 
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input); 

    char toRemove;
    cout << "Enter the character to remove: ";
    cin >> toRemove; 

    string result = removeAllOccurrences(input, toRemove); 
    cout << "Resulting string: " << result << endl; 

    return 0;
}
