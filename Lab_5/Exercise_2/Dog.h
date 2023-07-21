#ifndef DOG_H
#define DOG_H

#include "Animal.h"
using namespace std;

class Dog: public Animal {
    public:
        // default constructor
        Dog() {
            cout << "Creating Dog" << endl;
            name = "Dog";
            age = 0;
        }
        // custom constructor
        Dog(string name, int age) {
            cout << "Creating Dog" << endl;
            setName(name);
            setAge(age); 
        }
        // destructor
        ~Dog() {
            cout << "Deleting Dog" << endl;
        }
        void feed() {
		cout << "Dog food, please!" << endl;
	    }

};
#endif