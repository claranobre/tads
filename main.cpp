
#include <iostream>

#include "sequence.hpp"
#include "stack.hpp"
#include "queue.hpp"
#include "deque.hpp"

using namespace std;
int main() {

	/*int x;
	Sequence<int> teste;
	
	x= teste.getSize();

	cout << "tamanho: " << teste.getSize()<< endl;*/

	Sequence<int> Seq, Seq2;
	int i;
	/*
	Modelo base de Maria Clara
	*/	
	cout << "addFirst: \n";
	for (i = 2; i <= 4; i++){
		if (!Seq.addFirst(i))
			cout << "erro \n";
	}
	cout << "sucesso\n";

	cout << "Sequencia 1:\t";
	Seq.print();

	cout << "addLast:\n";
	cout << "Sequencia 1:\t";
	Seq.addLast(1);
	Seq.addLast(0);
	Seq.print();

	cout << "\nAdd:\n";
	cout << "Sequencia 1:\n";
	cout << "Add posicao 2:\t";
	Seq.add(1111, 2);
	Seq.print();
	cout << "Add posicao -1\t";
	Seq.add(1111, -1);
	Seq.print();
	cout << "Add posicao 100\t";
	Seq.add(1111, 100);
	Seq.print();
	
	cout << "\nRemoveFirst:\n";
	cout << "Sequencia 1:\t";
	Seq.removeFirst();
	Seq.print();

	cout << "\nRemoveLast:\n";
	cout << "Sequencia 1:\t";
	Seq.removeLast();
	Seq.print();

	cout << "\nRemove:\n";
	cout << "Sequencia 1:\n";
	cout << "Remover posicao 2:\t";
	Seq.remove(2);
	Seq.print();
	cout << "Remover posicao -1\t";
	Seq.remove(-1);
	Seq.print();
	cout << "Remover posicao 100\t";
	Seq.remove(100);
	Seq.print();

	cout << "\nGetFirst e getLast:\n";
	cout << "Primeiro elemento: " << Seq.getFirst() << endl;
	cout << "Ultimo elemento: " << Seq.getLast() << endl;

	Seq.addFirst(4);
	Seq.addFirst(5);
	Seq.addFirst(6);
	cout << "\nNova sequencia:\n";
	Seq.print();

	cout << "\nGet:\n";
	cout << "Posicao 0: " << Seq.get(0) << endl;
	cout << "Posicao 3: " << Seq.get(3) << endl;

	cout << "\nSearch():\n";
	cout <<"Busca 5: ";
	if (Seq.search(5))
		cout <<"sequencia\n";
	else
		cout << "errado\n";
	
	cout << "Busca 400: ";
	if (Seq.search(400))
		cout <<"esta na sequencia\n";
	else
		cout << "nao esta na sequencia\n";

	cout << "\nIsIncreasing():\n";
	if (Seq.isIncreasing())
		cout << "Sequencia crescente\n";
	else
		cout << "Sequencia nao eh crescente\n";

	cout << "\nIsDecreasing():\n";
	if (Seq.isDecreasing())
		cout << "Sequencia eh decrescente\n";
	else
		cout << "Sequencia nao eh decrescente\n";


	Seq.addFirst(8);
	Seq.addLast(50);
	Seq.add(-1, 4);
	std::cout << "\nNova sequencia de Teste:\n";
	Seq.print();	
	
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