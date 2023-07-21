#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Animal {
protected:
	string name;
	int age;
	

public:
	static int count;
	
	Animal() {
		cout << "Creating Generic Animal" << endl;
		name = "Generic Animal";
		age = 0;
		count++;
	}

	Animal(string name, int age) {
		cout << "Creating Generic Animal" << endl;
		setName(name);
		setAge(age);
		count++;
	}
	
	~Animal() {
		cout << "Deleting Generic Animal" << endl;
	}

	string getName() {
		return name;
	}

	void setName(string name) {
		this->name = name;
	}

	int getAge() {
		return age;
	}

	void setAge(int age) {
		this->age = age;
	}

	void feed() {
		cout << "Some food, please!" << endl;
	}
};

#endif