#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>

class LinkedList {
    public:	
        struct Link {
            void* data;
            Link* next;
            
            void initialize(void* dat, Link* nxt) {
                data = dat;
                next = nxt;
            }
        }*head, *tail;
        
        
        // acts as a default constructor
        void initialize() {
            head = 0;
            tail = 0;
        }    

        // custom constructor
        LinkedList(double* data, Link* next) {
            Link* newLink = new Link;
            newLink->data = data;
            newLink->next = next;
            head = newLink;
            // std::cout << "head->data: " << *((double*)head->data) << std::endl;
            // std::cout << "head->next: " << head->next << std::endl;
        }

        void add(LinkedList::Link* l, int n) {
            bool connect = false;
            Link* temp;
            if (l->next != NULL){
                // holds pointer to rest of linked list
                temp = l->next;
                connect = true;
            }

            for (int i = 0; i < n; i++) {
                Link* newLink = new Link;
                newLink->data = new double(i);
                newLink->next = NULL;

                l->next = newLink;
                // move l to next to prepare to add new link
                l = l->next; 
            }

            if (connect) {
                // once we reach the last link, link it to temp (the rest of linked list)
                l->next = temp;
            }
        }

        void print() {
            Link* temp = head;

            while(temp != NULL){
                std::cout << *((double*)temp->data);
                if (temp->next != NULL ){
                    std::cout << ", ";
                }
                temp = temp->next;
            }
            std::cout << std::endl;
        }

        void cleanup() {
            // create nextLink to store Link that is after Link that will be deleted
            Link* nextLink = NULL;

            // while head is not at end of list
            while(head != NULL){
                // store head's next Link in nextLink
                nextLink = head->next;
                // delete head
                delete head;
                // set head to nextLink to advance in list
                head = nextLink;  
            }
        
            if (head == NULL){
                std::cout << "Linked List is empty" << std::endl;
            }
            else {
                std::cout << "Linked List is not empty" << std::endl;
            }        
        }



};

#endif