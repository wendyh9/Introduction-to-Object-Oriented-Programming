#ifndef PARTICIPANT_H
#define PARTICIPANT_H

#include <iostream>
#include <string>
#include "Data.h"
#include "Sortable.h"

class Participant : public Sortable {
    protected:
        std::string name;
        int age; 
        double score;
    
    public:
        // default constructor
        Participant() {}
        // custom constructor
        Participant(std::string n, int a, double s) {
            name = n;
            age = a;
            score = s;
        }

        bool compare(const Sortable* s){
            // this->score refers to the Participant obj's own score
            // need to make sure to cast s as a Participant* obj to access members
            if (this->score == ((Participant*)s)->score) {
                if (this->age == ((Participant*)s)->age) {
                    return this->name < ((Participant*)s)->name;
                }                
                return this->age < ((Participant*)s)->age;
            }
            return this->score > ((Participant*)s)->score;
        }

        void print(){
            std::cout << name << "\t" << age << "\t" << score << std::endl;
        }
};

#endif