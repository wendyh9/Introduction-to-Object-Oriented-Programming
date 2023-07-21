#include <iostream>
#include <vector>
#include "display.h"
using namespace std;

int main() {
    int N;
    char type;
    string name;
    int age;
    vector <Animal*> animal_vect;

    cout << "Enter value of N: ";
    cin >> N;

    for (int i = 0; i < N; i++) {
        cout << "Enter the animal's info: ";
        cin >> type;
        cin >> name;
        cin >> age;
        // remember animal_vect is a vector of Animal pointers
        if (type == 'D' || type == 'd') {
            animal_vect.push_back(new Dog(name, age));
        }
        else if (type == 'A' || type == 'a'){
            animal_vect.push_back(new Animal(name, age));
        }
        else {
            cout << "Please enter an appropriate type of animal." << endl;
            goto label;
        }
    }
    display(animal_vect);

    // release memory used by pointers
    // for (int i = 0; i < animal_vect.size(); i++) {
    //     delete animal_vect[i];
    // }

    label: 
    return 0;
}