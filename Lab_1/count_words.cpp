#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    int count = 0;
    string word;
    ifstream input("words.txt");
    
    // can extract a word from input using >>
    while(input >> word) {
        count++;
    }
    cout << "Number of words: " << count << endl;
    
    input.close();
    
    return 0;
}