#ifndef RECT_H
#define RECT_H

#include "Vec.h"

class Rect {

    public:
        float x, y, width, height;

        // default constructor
        Rect() {
            x = 0;
            y = 0;
            width = 0;
            height = 0;
        }

        // custom constructor
        Rect(float x, float y, float width, float height) {
            this->x = x;
            this->y = y;
            this->width = width;
            this->height = height;
        }

        // contains method
        // NOTE: Because the (x,y) coordinates specify the UPPER-LEFT corner of the rectangle, the rectangle's "height" actually goes down!
        bool contains(Vec vec1) {
            // just consider a Vec     
            if ((vec1.x == x || (vec1.x > x && (vec1.x < (x + width) || vec1.x == (x + width)))) && 
                (vec1.y == y || (vec1.y < y && (vec1.y == (y - height) || vec1.y > (y - height))))) {
                return true;
            }            

            return false;
        }

        // destructor
        ~Rect() {}
};

#endif