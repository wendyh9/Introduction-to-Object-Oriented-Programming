#ifndef DYNARRAH_H
#define DYNARRAH_H

#include <iostream>
#include <vector>

template<class T>
class Iterator {
    int index;
    T& dynArr;

    public:
        // assigns value of temp to dynArr
        Iterator(T& temp) : dynArr(temp) {
            index = 0;
        }

        void begin() {
            index = 0;
        }

        bool at_end() {
            return index == dynArr.getSize();
        }

        void advance() {
            index++;
        }

        void print() {
            std::cout << index << ": " << dynArr[index] << "\n";
        }
};

template<class T>
class DynArray {
    std::vector<T> dynArr;
    int index = 0;

    public:
        void add(T temp) {
            dynArr.push_back(temp);
        }

        T& operator[](int index) {
            return dynArr[index];
        }

        int getSize() {
            return dynArr.size();
        }
};

#endif