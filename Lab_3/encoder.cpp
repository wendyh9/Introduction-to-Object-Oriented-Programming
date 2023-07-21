#include <iostream>
#include <string>
using namespace std;

// part 2

int main(){
    char character;
    int num;

    cout << "Enter a character: ";
    cin >> character;
    cout << "Enter a number: ";
    cin >> num;

    if (num == -1) {
        cout << endl;
    }
    else if (num == -2) {
        return 0;
    }
    else {
        for (int i = 0; i < num; i++) {
            cout << character;
        }
        cout << endl;
    }
    
    return 0;
}