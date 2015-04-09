#ifndef __QUEUE__
#define __QUEUE__

#include "sequence.hpp"


template <typename TYPE>
class Queue {
	Sequence<TYPE> seq;

public:
	Queue()  {}
	~Queue() {}

	TYPE front() {}
	TYPE enqueue(TYPE value) {}
	TYPE dequeue() {}

	bool isEmpty() {}
	void print() {}
};

#endif