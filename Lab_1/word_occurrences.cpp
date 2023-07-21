#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int count = 0;
    int i;

    string chosen;
	string line;

    ifstream input("words.txt");

    // holds each word
    vector<string> v;


	while (input >> line) { // getline returns true if read successfully
        // convert entire text file to lower case
        transform(line.begin(), line.end(), line.begin(), ::tolower);
		
        // remove punctuation
        auto itr = remove_if(line.begin(), line.end(), ::ispunct);
        line.erase(itr, line.end()); 
        
        v.push_back(line); // add the line to the end of v
    }

    // for (i = 0; i < v.size(); i++) {
    //     cout << v[i] << endl;
    // }

    cout << "Enter a word: ";
    cin >> chosen;


    // convert input to lower case
    transform(chosen.begin(), chosen.end(), chosen.begin(), ::tolower);

    // check if word is equivalent to chosen
    for (i = 0; i < v.size(); i++) {
        if (v[i] == chosen) {
            count++;
        }
    }
    cout << "Number of occurrences of " << chosen << ": " << count << endl;
    
    input.close();
    
    return 0;
}