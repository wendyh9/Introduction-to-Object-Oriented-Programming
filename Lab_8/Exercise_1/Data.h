#ifndef DATA_H
#define DATA_H

#include <iostream>
#include <vector>

class Data {
    protected:
        std::vector<int> int_vect;
    
    public:
        Data() {}       // constructor
        ~Data() {}      // destructor
    
        void add(int number) {
            int_vect.push_back(number);
        }

        void swap(int* n1, int* n2) {
            int temp = *n1;
            *n1 = *n2;
            *n2 = temp;
        }
        
        void bubbleSort(int n) {
            int i, j;
            for (i = 0; i < n - 1; i++) {
                for (j = 0; j < n - i - 1; j++) {
                    if (int_vect[j] > int_vect[j + 1]) {
                        swap(&int_vect[j], &int_vect[j + 1]);
                    }
                }
            }
        }
         
        void sort() {    
            bubbleSort(int_vect.size());    
        }

        void print() {
            for (int i = 0; i < int_vect.size(); i++) {
                std::cout << int_vect[i] << " ";
            }
            std::cout << std::endl;
        }
};

#endif