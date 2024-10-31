#include <iostream>
#include <string>
using namespace std;

void replaceSpacesWithTabs(string& str) {
    for (char& c : str) {
        if (c == ' ') {
            c = '\t'; 
            
        }
    }
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    replaceSpacesWithTabs(input);
    cout << "Modified string: " << input << endl;

    return 0;
}
