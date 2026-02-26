#include "stack.h"
#include <iostream>

using namespace std;

Stack::Stack() {
	top = nullptr;
}

Stack::~Stack() {

}

bool Stack::isFull() {
	try {
		Node* temp = new Node;
		delete temp;
		return false;
	}
	catch(bad_alloc){
		return true;
	}
}

bool Stack::isEmpty() {
	if (top == nullptr)
		return true;
	else
		return false;
}

void Stack::push(const Card& item) {
	sizenum++;
	Node* current = new Node;
	current->data = item;
	current->next = top;
	top = current;
}

void Stack::pop() {
	if (isEmpty()) {
		cout << "Stack is empty, cannot remove item from stack";
		return;
	}
	else {
		sizenum--;
		Node* temp = top;
		top = top->next;
		delete temp;
	}
}

Card Stack::peek() {
	if (isEmpty()) {
		cout << "stack is empty";
	}
	else
		return top->data;
}

int Stack::size(){
	return sizenum;
}