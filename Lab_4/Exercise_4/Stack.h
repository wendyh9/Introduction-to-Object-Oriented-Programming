#ifndef STACK_H
#define STACK_H

#include <iostream>

struct Stack {
	void (*deletecb) (void* pt);
	struct Link {
		void* data;
		Link* next;
		
		void initialize(void* dat, Link* nxt){
			data = dat;
			next = nxt;
		}
	}* head;
	
	void initialize(){
		head = 0;
	}
	
	void push(void* dat){
		Link* newLink = new Link;
		newLink->initialize(dat, head);
		head = newLink;
	}
	
	void* peek(){
		if (head == 0){
			std::cout << "Stack is empty";
		}
		return head->data;
	}
	
	void* pop(){
		if(head == 0)
			return 0;
		
		void* result = head->data;
		Link* oldHead = head;
		head = head->next;
		delete oldHead;
		return result;
	}

	// sets deletecb to appropriate function
	void setDeleteCallback ( void (*delcb) (void* pt) ) {
		deletecb = delcb;
	};	

	void cleanup(){
		if (head == 0){
			std::cout << "Stack is empty";
		}
		else {
			std::cout << "Stack is not empty" << std::endl;		
			Link* link_ptr = head;
			while(link_ptr != NULL){
				// keep track of next link because head will be deleted
				link_ptr = head->next;
				// deletes stored pointer
				deletecb(head->data);
				// deletes link ptr head
				delete head;
				// head now is next link
				head = link_ptr;
			}
		}

	}


};
#endif