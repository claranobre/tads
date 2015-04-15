#ifndef __DEQUE__
#define __DEQUE__

#include "sequence.hpp"

template <typename TYPE>
class Deque {
	Sequence<TYPE> seq;
public:
	Deque() {}
	~Deque() {}

	TYPE front() {
		return seq.getFirst();
	}
	TYPE back() {
		return seq.getLast();
	}

	TYPE pushFront(TYPE value) {
		return seq.addFirst(value);
	}

	TYPE pushBack(TYPE value) {
		return seq.addLast(value);
	}

	TYPE popFront() {
		return seq.removeFirst();
	}
	
	TYPE popBack() {
		return seq.removeLast();
	}

	bool isEmpty() {
		return seq.isEmpty();
	}
	void print() {
		seq.print();
	}
};

#endif