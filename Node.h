#ifndef _NODE_H
#define _NODE_H

template<class T>
class Node{
public:
	T data;
	Node* next;
	Node* prev;

	Node(T d){
		data = d;
		next = prev = NULL();
	}
};
#endif