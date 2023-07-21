#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

// part 1

int main() {
    string input;
    vector<string> strings_vect;
    // for one letter string
    char* char_arr = new char[1];

    do {
        cout << "Enter string: ";
        // account for strings with spaces
        getline(cin, input);
        
        // add input into vector
        if (input.length() != 1){
            strings_vect.push_back(input);
        }
        // if input is a character, find all strings that start with that character
        // print them (one on each line)
        else {
            string temp_str;

            // can't type cast one letter str to char, need to use a char array
            strcpy(char_arr, input.c_str());

            for (int i = 0; i < strings_vect.size(); i++) {
                // make sure not case sensitive
                transform(strings_vect[i].begin(), strings_vect[i].end(), temp_str.begin(), ::tolower);
                // compare first letter of words to char
                if (temp_str[0] == (char)tolower(char_arr[0])) {
                    cout << strings_vect[i] << endl;
                }
            }
        }
    }while (input != "quit");

    // release memory used by char_arr
    delete[] char_arr;

    return 0;
}