#ifndef RECT_H
#define RECT_H

#include "Vec.h"

class Rect {

    public:
        float x, y, w, h;

        // default constructor
        Rect() {
            x = 0;
            y = 0;
            w = 0;
            h = 0;
        }

        // custom constructor
        Rect(float x, float y, float w, float h) {
            this->x = x;
            this->y = y;
            this->w = w;
            this->h = h;
        }

        // contains method
        // NOTE: Because the (x,y) coordinates specify the UPPER-LEFT corner of the rectangle, the rectangle's "h" actually goes down!
        bool contains(Vec vec1) {
            // just consider a Vec     
            if ((vec1.x == x || (vec1.x > x && (vec1.x < (x + w) || vec1.x == (x + w)))) && 
                (vec1.y == y || (vec1.y < y && (vec1.y == (y - h) || vec1.y > (y - h))))) {
                return true;
            }            

            return false;
        }

        // destructor
        ~Rect() {}
};

#endif