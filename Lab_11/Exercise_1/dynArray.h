#ifndef DYNARRAH_H
#define DYNARRAH_H

#include <vector>

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