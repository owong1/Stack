#include <iostream>
#include <cassert>
#include "Stack.h"

using namespace std;

template<class T>
Stack<T>::Stack(){	//ctor
	size = 0;
	top = NULL;
}
template<class T>
Stack<T>::~Stack(){	//dtor
	while (!isEmpty()){
		popTop();
	}
}

template<class T>
void Stack<T>::pushTop(T d){	//insert
	Node<T>* n = new Node<T>(d);	//n address of new node data = memory space
	if (isEmpty()){			//if empty, make space for inserting at top
		top = n;
	}
	else{
		n->prev = top;		//new at prev becomes head
		top->next = n;		//head at next becomes new
		top = n;
	}
	size++;					//increment size of stack
}

template<class T>
T Stack<T>::popTop(){		//delete
	assert(!isEmpty());
	T d = top->data;		//copy of data
	if (getSize() == 1){	//delete node if only 1 node
		delete top;			//empty list
		top = NULL;
	}
	else{					//if more than one node
		top = top->prev;	//copy data to prev
		delete top->next;	//remove data
		top->next = NULL;	//removed address is null
	}
	size--;
	return d;
}

template<class T>
bool Stack<T>::isEmpty(){
	return size == 0 ? true : false;
}
template<class T>
int Stack<T>::getSize(){
	return size;
}

//explicit instantiations with templates
template class Stack<int>;
//template class Stack<int*>;
//template class Stack<float>;
//template class Stack<float*>;
template class Stack<double>;
//template class Stack<double*>;
//template class Stack<char>;
//template class Stack<char*>;
//template class Stack<std::string>;