#include <iostream>
#include <string>
using namespace std;

string removeCharacterAtIndex(const string& str, int index) {
    
    if (index < 0 || index >= str.length()) {
        return str; 
    }
   
    return str.substr(0, index) + str.substr(index + 1);
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    int index;
    cout << "Enter index of character to remove: ";
    cin >> index;

    string result = removeCharacterAtIndex(input, index);
    cout << "Resulting string: " << result << endl;

    return 0;
}
