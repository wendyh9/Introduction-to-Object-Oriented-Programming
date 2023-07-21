#ifndef ADDRESSBOOK_H
#define ADDRESSBOOK_H

#include<iostream>
#include<string>
#include<vector>

// Note: addressBook.cpp does not have #include<string> or using namespace std
// please add these so addressBook.cpp can run without errors
// int i in the for loop in addressBook.cpp should have the value of 0 but was given the value of 1 

struct AddressBook {
    public:
        struct Entry {
            private:
                std::string name;
                std::string lastName;
                std::string email;
            
            public:
                // default constructor
                Entry() {
                    name = "";
                    lastName = "";
                    email = "";
                }
                
                // custom constructor
                Entry(std::string name, std::string lastName, std::string email) {
                    this->name = name;
                    this->lastName = lastName;
                    this->email = email;
                }

                // destructor
                ~Entry(){}

                // setter functions
                void setName(std::string name) {
                    this->name = name;
                }
                void setLastname(std::string lastName) {
                    this->lastName = lastName;
                }
                void setEmail(std::string email) {
                    this->email = email;
                }

                // getter functions
                std::string getName() {
                    return name;
                }
                std::string getLastname() {
                    return lastName;
                }
                std::string getEmail() {
                    return email;
                }
                
                // Exercise 5 problem statement: "This function should print out the information in the struct in the way it appears in the sample."
                // Note: no sample was provided in the problem statement
                // print function
                void print() {
                    std::cout << std::endl;
                    std::cout << "First name: " << this->name << std::endl; 
                    std::cout <<"Last name: " << this->lastName << std::endl; 
                    std::cout << "Email: " << this->email << std::endl;
                }
        };

        std::vector<Entry> entry_vect;

        // default constructor
        AddressBook() {}
        
        // custom constructor 
        AddressBook(std::string name, std::string lastName, std::string email) {
            Entry temp_entry = AddressBook::Entry(name, lastName, email);
            entry_vect.push_back(temp_entry);
        }               
        
        void add(AddressBook* addressBook) {
            for(int i = 0; i < (addressBook->entry_vect).size(); i++) {
                entry_vect.push_back(addressBook->entry_vect[i]);
            }
        }

        // destructor
        ~AddressBook() {}

        void print() {
            for (int i = 0; i < entry_vect.size(); i++) {
                entry_vect[i].AddressBook::Entry::print();
            }
        }

};

#endif