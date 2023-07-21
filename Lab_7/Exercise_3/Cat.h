#ifndef CAT_H
#define CAT_H

#include "Animal.h"

class Cat : public Animal {
public:
	// inherit default constructor
	Cat() : Animal() {
	}
	// inherit custom constructor
	Cat( std::string n, int a ) : Animal( n, a ) {
	}

	void talk() {
		std::cout << "Meow, meow!" << std::endl;
	}
};

#endif