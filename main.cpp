#include <iostream>
#include "Stack.h"

using namespace std;

int main(){
	Stack<double> S;

	double a[] = { 2.4, 6.1, 3.9, 8.2 };


	//display and input numbers
	cout << "Values to insert: ";
	for (int i = 0; i < 4; i++){
		cout << a[i] << " ";
		S.pushTop(a[i]);
	}

	cout << endl;

	cout << "Values in stack: ";
	for (int i = 0; i < 4; i++){
		std::cout << S.popTop() << " ";	//display each item as it's deleted from the list
	}

	//keep .exe window open
	getchar();
	return 0;
}
