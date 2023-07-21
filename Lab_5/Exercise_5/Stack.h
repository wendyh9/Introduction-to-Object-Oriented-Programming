#ifndef STACK_H
#define STACK_H

#include <iostream>

struct Stack {
	struct Link {
		double data;
		Link* next;
		
		void initialize(double dat, Link* nxt) {
			data = dat;
			next = nxt;
		}
	}* head;
    
    int count = 0;

    // default constructor
    Stack() {
        initialize();
    }

    // custom constructor
    Stack(int n) {
        // Link* temp_link_ptr = head;
        double temp_double = 1;
        for (int i = 0; i < n; i++) {
            // temp_link_ptr->data = temp_double;
            // temp_link_ptr->next = NULL;
            push(temp_double);
            temp_double += 0.1;
        }
    }

    // destructor
    ~Stack(){
        for (int i = 0; i < count; i++) {
            std::cout << pop() << " ";
        }
    }
	
	void initialize() {
		head = 0;
	}
	
	void push(double dat) {
        count++;
		Link* newLink = new Link;
		newLink->initialize(dat, head);
		head = newLink;
	}
	
	double peek() {
		if (head == 0) {
			std::cout << "Stack is empty";
		}
		return head->data;
	}
	
	double pop() {
		if(head == 0)
			return 0;
		
		double result = head->data;
		Link* oldHead = head;
		head = head->next;
		delete oldHead;
		return result;
	}
	
	void cleanup() {
		if (head == 0){
			std::cout << "Stack is empty";
		}
		else {
			std::cout << "Stack is not empty";
		}
	}
};

#endif