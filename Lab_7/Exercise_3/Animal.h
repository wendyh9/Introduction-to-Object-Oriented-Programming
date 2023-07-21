#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal {
	std::string name;
	int age;

public:
	Animal() {
		name = "Generic Name";
		age = 0;
	}

	Animal( std::string n, int a ) {
		name = n;
		age = a;
	}

	// original did not have a talk method
	// need to use virtual keyword to tell compiler to call the descendant method
	virtual void talk() {
		std::cout << "Generic animal noise" << std::endl;
	}

	// original did not have a destructor
	~Animal(){

	}
};

#endif