#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include "Data.h"
#include "Sortable.h"

class Circle : public Sortable{
    protected:
        float radius;

    public:
        // default constructor
        Circle(){
            radius = 0;
        }
        // custom constructor
        Circle(float r){
            radius = r;
        }
        
        bool compare(const Sortable* s){
            // this->radius refers to the Circle obj's own radius
            // need to make sure to cast s as a Circle* obj to access radius
            return this->radius < ((Circle*)s)->radius;
        }

        void print(){
            std::cout << "Circle with radius: " << radius << std::endl;
        }

};

#endif