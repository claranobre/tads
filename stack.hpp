#ifndef __STACK__
#define __STACK__

#include "sequence.hpp"

template <typename TYPE>
class Stack {
	Sequence<TYPE> seq;
	
public:
	Stack()  {};
	~Stack() {};

	TYPE top() {
		return seq.getFirst();
	}
	bool push(TYPE value) {
		return seq.addFirst(value);
	}
	TYPE pop() {
		return seq.removeFirst();
	}

	bool isEmpty() {
		return seq.isEmpty();
	}
	void print()   {
		seq.print();
	}
};

#endif