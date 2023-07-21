#ifndef VEC_H
#define VEC_H

class Vec {
    public:   

        float x, y;

        // default constructor
        Vec() {
            x = 0;
            y = 0;
        }

        // custom constructor
        Vec(float num1, float num2) {
            x = num1;
            y = num2; 
        }

        void set(float num1, float num2) {
            x = num1;
            y = num2;
        }

        void add(Vec vec1) {
            x = vec1.x + x;
            y = vec1.y + y;
        }

        void print() {
            std::cout << "(" << x << ", " << y << ")" << std::endl;
        }

        // destructor
        ~Vec(){}

};


#endif