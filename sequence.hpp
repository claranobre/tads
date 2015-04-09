#ifndef __SEQUENCE__
#define __SEQUENCE__


template <typename TYPE>
class Sequence {

	struct Node {
		TYPE data;
		Node *next, *prev;
		Node() { next = prev = nullptr; }
	};

	/** list.next aponta para o 1o elemento e list.prev para o último */
	Node list;

	/**
	 * Troca dois elementos de posição ajustando seus ponteiros. Por exemplo, dada a
	 * sequência A = { 1, 2, 3, 4, 5 }, se fizermos o swap() passado referência para os
	 * nós que contém 2 e 5, a sequência ficaria A = { 1, 5, 3, 4, 2 }.
	 * @param n1 Referência para o primeiro elemento
	 * @param n2 Referência para o segundo elemento
	 */
	void swap(Node *n1, Node *n2);


public:
	/** Inicializa a sequência */
	Sequence();

	/** Desaloca todos os elementos da sequência e volta ao estado inicial */
	~Sequence();

	/** Constrói uma nova sequência a partir de uma já existente (os dados são duplicados) */
	Sequence(const Sequence<TYPE> &s);

	/** Verifica se todos os elementos da sequência são iguais aos de outra sequência */
	TYPE& operator=(const Sequence<TYPE> &s);
	
	/** Verifica se a sequência está vazia */
	bool isEmpty();

	/** Retorna o número de elementos na sequência */
	int  getSize();

	/**
	 * Adiciona um elemento no início da sequência.
	 * @param  value Elemento a ser inserido
	 * @return       Verdadeiro se o elemento foi adicionado ou falso caso contrário (memória cheia, por exemplo)
	 */
	bool addFirst(const TYPE &value);

	/**
	 * Adiciona um elemento no final da sequência
	 * @param  value Elemento a ser inserido
	 * @return       Verdadeiro se o elemento foi adicionado ou falso caso contrário (memória cheia, por exemplo)
	 */
	bool addLast(const TYPE &value);

	/**
	 * Adiciona um elemento em uma posição específica da sequência. Se a posição dada for
	 * negativa, insere no ínicio. Se a posição for maior que o tamanho da sequência, insere
	 * no final.
	 * @param value Elemento a ser inserido
	 * @param pos   Posição do elemento a ser inserido
	 * @return      Verdadeiro se o elemento foi adicionado ou falso caso contrário (memória cheia, por exemplo)
	 */
	bool add(const TYPE &value, int pos = 0);

	/**
	 * Remove o primeiro elemento da sequência
	 * @return Uma cópia do elemento removido
	 */
	TYPE removeFirst();

	/**
	 * Remove o último elemento da sequência
	 * @return Uma cópia do elemento removido
	 */
	TYPE removeLast();

	/**
	 * Remove o elemento de uma posição específica. Se a posição dada for negativa, remove
	 * o primeiro elemento. Se for maior que o tamanho, remove o último.
	 * @param  pos Posição do elemento a ser removido
	 * @return     Uma cópia do elemento removido
	 */
	TYPE remove(int pos = 0);

	/**
	 * Consulta o primeiro elemento da sequência
	 * @return Uma cópia do primeiro elemento
	 */
	TYPE getFirst();

	/**
	 * Consulta o último elemento da sequência
	 * @return Uma cópia do último elemento
	 */
	TYPE getLast();

	/**
	 * Consulta o elemento de uma posição específica
	 * @return Uma cópia do elemento
	 */
	TYPE get(int pos = 0);

	/**
	 * Consulta a posição de um elemento na sequência
	 * @param  elm Elemento a ser consultado
	 * @return     Posição em que ele se encontra ou -1 se ele não existir na sequência
	 */
	int search(const TYPE &elm);

	/**
	 * Verifica se todos os elementos (e sua ordem) de uma sequência são iguais aos
	 * elementos de outra sequência
	 * @param  s Sequência a ser comparada
	 * @return   Verdadeiro se elas forem iguais ou falso caso contrário
	 */
	bool isEqual(Sequence<TYPE> &s);

	/**
	 * Inverte os elementos de uma sequência. O primeiro passa a ser o último, o
	 * segundo passa a ser o penúltimo e assim por diante.
	 */
	void reverse();

	/**
	 * Verifica se os elementos de uma sequência estão em ordem crescente.
	 * @return Verdadeiro se estiverem em ordem crescente ou falso caso contrário
	 */
	bool isIncreasing();

	/**
	 * Verifica se os elementos de uma sequência estão em ordem decrescente.
	 * @return Verdadeiro se estiverem em ordem decrescente ou falso caso contrário
	 */
	bool isDecreasing();

	/**
	 * Encontra os valores mínimo e o máximo de uma sequência.
	 */
	void bounds(TYPE &min, TYPE &max);

	/**
	 * Ordena os dados de uma sequência.
	 */
	void sort();

	/**
	 * Envia para a saída-padrão os elementos da sequência.
	 */
	void print();
};

#include "sequence.cpp"

#endif