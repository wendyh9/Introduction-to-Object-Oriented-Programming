#include <iostream>
#include "Stash.h"
using namespace std;

// Exercise 1

int main(){
    int N = 0;
    int i;
    cout << "Enter value of N: ";
    cin >> N;
    double temp_val;

    Stash stash_obj;
    // initialize using size of double in bytes
    stash_obj.initialize(sizeof(double));
    
    for (int i = 0; i < N; i++) {
        cout << "Enter a double value: ";
        cin >> temp_val;
        // pass in using address of temp_val
        stash_obj.add(&temp_val);
    }

    for (i = 0; i < N; i++) {
        // need to type cast to double* because you need to give void* a concrete type
        cout << *((double*)stash_obj.fetch(i)) << endl; 
    }

    stash_obj.cleanup();
    
    return 0;
}