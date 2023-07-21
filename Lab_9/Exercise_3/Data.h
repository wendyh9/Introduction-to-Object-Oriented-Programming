#ifndef DATA_H
#define DATA_H

#include <iostream>
#include <vector>
#include "Sortable.h"

class Data {
    protected:
        std::vector<Sortable*> sortable_vect;
    
    public:
        void add(Sortable* sortable) {
            sortable_vect.push_back(sortable);
        }   
        
        // need to make sure arguments are Sortable* references, use & operator
        void swap(Sortable*& n1, Sortable*& n2) {
            Sortable* temp = n1;
            n1 = n2;
            n2 = temp;
        }
        
        void bubbleSort(int n) {
            int i, j;
            for (i = 0; i < n - 1; i++) {
                for (j = 0; j < n - i - 1; j++) {
                    if ( (sortable_vect[j + 1])->compare(sortable_vect[j]) ) {
                        swap(sortable_vect[j], sortable_vect[j + 1]);
                    }
                }
            }
        }
  
        void sort() {    
            bubbleSort(sortable_vect.size());    
        }

        void print() {
            for (int i = 0; i < sortable_vect.size(); i++) {
                // ->print() goes to the print function in the class that includes this .h file
                sortable_vect[i]->print();
            }
            std::cout << std::endl;
        }

};

#endif