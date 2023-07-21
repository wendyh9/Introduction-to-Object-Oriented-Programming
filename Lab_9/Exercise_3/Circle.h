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
            // dynamic cast will only work if s can be casted as const Circle* 
            const Circle* someCircle = dynamic_cast<const Circle*>(s);

            // s was successfully casted as const Circle*
            if (someCircle != 0) {            
                // this->radius refers to the Circle obj's own radius
                // need to make sure to cast s as a Circle* obj to access radius
                return this->radius < ((Circle*)s)->radius;
                
            } 
            // s was not successfully casted as const Circle*
            // Circle obj is smaller than Participant obj
            return true;
                
        }

        void print(){
            std::cout << "Circle with radius: " << radius << std::endl;
        }

};

#endif