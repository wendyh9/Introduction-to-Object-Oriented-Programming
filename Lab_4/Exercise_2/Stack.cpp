#include <iostream>
#include "Stack.h"
using namespace std;

// Exercise 2

int main(){
    int i;
    int N = 0;
    double temp_val;
    cout << "Enter value of N: ";
    cin >> N;
    
    Stack stack_obj;
    stack_obj.initialize();
    
    for (i = 0; i < N; i++) {
        cout << "Enter a double value: ";
        cin >> temp_val;
        // need to pass in new double because we want to pass in a double ptr with value of temp_val
        stack_obj.push(new double(temp_val));  
    }
    
    for (i = 0; i < N; i++) {
        // need to type cast to double* because you need to give void* a concrete type
        cout << *((double*)stack_obj.pop()) << endl; 
    }

    stack_obj.cleanup();
    cout << endl;
    return 0;
}