#ifndef __DEQUE__
#define __DEQUE__

#include "sequence.hpp"


template <typename TYPE>
class Deque {
	Sequence<TYPE> seq;
public:
	Deque() {}
	~Deque() {}

	TYPE front() {}
	TYPE back() {}

	TYPE pushFront(TYPE value) {}

	TYPE pushBack(TYPE value) {}

	TYPE popFront() {}
	
	TYPE popBack() {}

	bool isEmpty() {}
	void print() {}
};

#endif