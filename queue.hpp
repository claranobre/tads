#ifndef __QUEUE__
#define __QUEUE__

#include "sequence.hpp"

template <typename TYPE>
class Queue {
	Sequence<TYPE> seq;

public:
	Queue()  {}
	~Queue() {}

	TYPE front() {
		return seq.getFirst();
	}
	bool enqueue(TYPE value) {
		return seq.addLast(value);
	}
	TYPE dequeue() {
		return seq.removeFirst();
	}

	bool isEmpty() {
		return seq.isEmpty();
	}
	void print() {
		seq.print();
	}
};

#endif