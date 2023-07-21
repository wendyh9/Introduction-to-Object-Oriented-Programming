#include <iostream>
#include <cstdlib>
#include <string>
#include "Stash.h"
#include <algorithm>
using namespace std;

int main() {
    int increment;
    char character;
    int num;
    string temp_str;
    // int numOfInput = 0;
    Stash stash_obj;

    cout << "Enter the desired increment to be used during re-allocation: ";
    cin >> increment;

    // initialize(sz, incr)  
    stash_obj.initialize(sizeof(char), increment);
    
    do{
        cout << "Enter a character: ";
        cin >> character;
        cout <<"Enter an integer: ";
        cin >> num;
        if (character != '&' || num != 99) {
            
            for (int i = 0; i < abs(num); i++){
                stash_obj.add(&character);
                // stash_obj.add(new char(character));
            }            
            if (num < 0){
                character = '\n';
                stash_obj.add(&character);

            }
         
        }

    } while(character != '&' || num != 99);

    for (int i = 0; i < stash_obj.count(); i++) {
        // need to type cast to string* because you need to give void* a concrete type
        cout << *((char*)stash_obj.fetch(i)); 
    }

    cout << endl;
    cout << "Number of calls made to inflate(): " << stash_obj.numOfCalls << endl;
    cout << "Total size in bytes that was allocated by the Stash object: " << stash_obj.quantity << endl;

    stash_obj.cleanup();

    return 0;
}