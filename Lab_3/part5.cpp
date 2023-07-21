#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    // strings need to be 10 characters or less
    // no repeated entries

    string input;
    
    // V is a vector of string vectors
    vector<vector<string>> V;
    // we know that V will have 10 entries
    V.resize(10);


    // keep track of unique strings
    vector<string> unique_vect;

    cout << "Valid input are strings with 10 characters or less." << endl << "Repeated entries and invalid strings will not be taken into consideration (according to the lab instructions)." << endl << endl;

    do {
        cout << "Enter a string: ";
        cin >> input;
        if (input != "quit" && input.length() < 11 && count(unique_vect.begin(), unique_vect.end(), input) == 0) {
            V[input.length() - 1].push_back(input);
            unique_vect.push_back(input);
        }

    } while(input != "quit");

    for (int i = 0; i < V.size(); i++){
        if (!(V[i].empty())) {
            cout << (i + 1) * V[i].size() << " " << V[i].size() << endl;
        }
    }

    return 0;
}