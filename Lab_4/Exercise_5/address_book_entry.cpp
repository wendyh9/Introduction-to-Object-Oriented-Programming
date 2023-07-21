#include <iostream>
#include <string>
#include "Entry.h"

int main(int argc, const char * argv[])
{
	std::string name, lastname, email;

	std::cin >> name;
	std::cin >> lastname;
	std::cin >> email;

	Entry myEntry;

	myEntry.setName(name);
	// std::cout << myEntry.getName() << std::endl;
	myEntry.setLastname(lastname);
	// std::cout << myEntry.getLastname() << std::endl;
	myEntry.setEmail(email);
	// std::cout << myEntry.getEmail() << std::endl;

	myEntry.print();

	return 0;
}