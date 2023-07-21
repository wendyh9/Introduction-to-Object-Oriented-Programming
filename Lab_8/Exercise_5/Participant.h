#ifndef PARTICIPANT_H
#define PARTICIPANT_H

#include <iostream>
#include <string>
#include "Data.h"
#include "Sortable.h"

class Participant : public Sortable {
    // need to make variables public so sortingByAttribute.cpp can access them
    public:
        std::string name;
        int age; 
        double score;
        // static pointer to a function that will hold reference to chosen sortBy method
        static bool (*comp_cb)(const Participant*, const Participant*);
    
    // public:
        // default constructor
        Participant() {}
        // custom constructor
        Participant(std::string n, int a, double s) {
            name = n;
            age = a;
            score = s;
        }

        bool compare(const Sortable* s){
            // pass in this obj and s
            // remember to cast s to Participant*
            return comp_cb(this, (Participant*)s);
        }

        void print(){
            std::cout << name << "\t" << age << "\t" << score << std::endl;
        }
        
};

#endif