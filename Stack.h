#ifndef STACK_H
#define STACK_H
#include "Node.h"

template<class T>
class Stack{
private:
	Node<T>* top;			//creates top node
	int size;			//size counter: nodes

public:
	Stack();
	~Stack();

	void pushTop(T d);//adding to the top
	T popTop();		//removing from the top

	int getSize();		//function that gets size/length
	bool isEmpty();
};

#endif