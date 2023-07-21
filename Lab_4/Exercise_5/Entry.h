#ifndef ENTRY_H
#define ENTRY_H

#include <iostream>
#include <string>

// Note: address_book_entry.cpp does not have #include<string> or using namespace std
// please add these so address_book_entry.cpp can run without errors

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
        // Problem statement: "This function should print out the information in the struct in the way it appears in the sample."
        // Note: no sample was provided in the problem statement
        // print function
        void print() {
            std::cout << "First name: " << this->name << std::endl; 
            std::cout <<"Last name: " << this->lastName << std::endl; 
            std::cout << "Email: " << this->email << std::endl;
        }
};

#endif