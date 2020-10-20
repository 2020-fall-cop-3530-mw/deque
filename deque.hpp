#ifndef DEQUE_HPP
#define DEQUE_HPP

#include "int-node.hpp"

class Deque
{
	private:
		IntNode * head;
		IntNode * tail;
	public:
		Deque ();
		void InsertAtHead (int value);
		void DeleteFromHead ();
		int Peek () const;
};

#endif /*DEQUE_HPP*/
