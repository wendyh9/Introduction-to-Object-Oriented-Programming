#ifndef OBJECT_H
#define OBJECT_H

class Object {
    public:
        static int count;
    
    // default constructor
    Object() {
        count++;
    }

    // custom constructor
    Object(const Object& someObject) {
        count++;
    }
    
    // destructor
    ~Object(){}

};

#endif