
#include <iostream>

#include "sequence.hpp"
#include "stack.hpp"
#include "queue.hpp"
#include "deque.hpp"

using namespace std;
int main() {

	int x;
	Sequence<int> teste;
	
	x= teste.getSize();

	cout << "tamanho: " << teste.getSize()<< endl;	
	/*Stack<int> s;
	Queue<int> q;
	Deque<int> d;

	int array[] = { 5, 2, 8, 1, 4, 6, 9, 0, 7, 3 };

	for (int i = 0; i < 10; ++i) {
		s.push(array[i]);
		q.enqueue(array[i]);
		d.pushFront(array[i]);
	}

	// --- print stack
	while (!s.isEmpty()) {
		std::cout << s.pop() << std::endl;
	}

	// --- print queue
	while (!q.isEmpty()) {
		std::cout << q.dequeue() << std::endl;
	}

	// --- print deque
	while (!d.isEmpty()) {
		std::cout << d.popBack() << std::endl;
	}*/

	return 0;
}