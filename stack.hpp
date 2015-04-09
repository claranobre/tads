#ifndef __STACK__
#define __STACK__

#include "sequence.hpp"


template <typename TYPE>
class Stack {
	Sequence<TYPE> seq;
	
public:
	Stack()  {};
	~Stack() {};

	TYPE top() {}
	TYPE push(TYPE value) {}
	TYPE pop() {}

	bool isEmpty() {}
	void print()   {}
};

#endif