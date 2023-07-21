#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string input;
    vector<string> string_vect;
    string temp_substr;
    string temp_str;

    // quit should not be processed
    // case-sensitive according to example in lab instructions
    do {
        cout << "Enter string: ";
        cin >> input;
        if (input.length() > 3) {
            string_vect.push_back(input);
        }
        else {
            for (int i = 0; i < string_vect.size(); i++) {
                temp_str = string_vect.at(i);
                // .substr(start, end)  note that end is inclusive
                if (temp_str.substr(0, input.length()) == input) {
                    cout << string_vect.at(i) << endl;
                }
            }
        }
    } while(input != "quit");

    return 0;
}