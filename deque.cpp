#include "deque.hpp"

Deque::Deque ()
{
}
void Deque::InsertAtHead (int value)
{
	IntNode * n = new IntNode(value, this->head);
	this->head = n;
}

void Deque::DeleteFromHead ()
{
	this->head = this->head->GetNext();
}

int Deque::Peek () const
{
	return this->head->GetValue();
}
