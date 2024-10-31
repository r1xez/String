#include <iostream>
#include <string>
using namespace std;

string insertCharacter(const string& str, char toInsert, int position) {

    if (position < 0 || position > str.length()) {
        cout << "Invalid position!" << endl;
        return str; 
    }

    
    string result = str.substr(0, position) + toInsert + str.substr(position);
    return result; 
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input); 

    char toInsert;
    cout << "Enter the character to insert: ";
    cin >> toInsert; 

    int position;
    cout << "Enter the position to insert the character: ";
    cin >> position; 
    string result = insertCharacter(input, toInsert, position);
    cout << "Resulting string: " << result << endl; 
    return 0;
}
