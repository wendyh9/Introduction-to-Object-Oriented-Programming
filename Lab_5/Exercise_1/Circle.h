#ifndef CIRCLE_H
#define CIRCLE_H

#include <cmath>

class Circle {
    private:
        double x, y, r;
        
    public:
        double area;
        
        // default constructor
        Circle() {
            x = 0;
            y = 0;
            r = 1;
            area = M_PI * (r * r);
        }
        // double area = (M_PI * r * r);
        // custom constructor
         Circle(double x, double y, double r) {
            this->x = x;
            this->y = y;
            this->r = r; 
            area = M_PI * (r * r);
        }

        // getter functions 
        int getX() {
            return x;
        }
        int getY() {
            return y;
        }
        int getR() {
            return r;
        }

        // setter functions
        void setX(int val) {
            x = val;
        }
        void setY(int val) {
            y = val;
        }
        void setR(int val) {
            r = val;
        }
};

#endif