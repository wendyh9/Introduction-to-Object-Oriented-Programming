#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter an integer: ";
    cin >> N;

    // prime number is greater than 1, always odd (only exception is 2)
    if (N > 1) {
        if (N == 2) {
            cout << "There are no prime numbers smaller than 2." << endl;
        }
        else{
            cout << 2 << endl;
            int temp = 3;  
            while (temp < N) {
                cout << temp << endl;
                temp += 2;
            } 
        }
        

    }
    else {
        cout << "This number is too small to be a prime number." << endl;
    }


    return 0;
}