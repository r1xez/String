#include <iostream>
#include <string>
using namespace std;

string replaceDotsWithExclamations(const string& str) {
    string result = str; 
    for (char& c : result) { 
        if (c == '.') { 
            c = '!'; 
        }
    }
    return result;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input); 

    string result = replaceDotsWithExclamations(input); 
    cout << "Modified string: " << result << endl;

    return 0;
}
