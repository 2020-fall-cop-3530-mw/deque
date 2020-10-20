#include "int-node.hpp"

IntNode::IntNode (int payload, IntNode * prev, IntNode * next)
{
	this->payload = payload;
	this->prev = prev;
	this->next = next;
}

IntNode * IntNode::GetPrev () const
{
	return this->prev;
}

IntNode * IntNode::GetNext () const
{
	return this->next;
}

int IntNode::GetValue () const
{
	return this->payload;
}

void IntNode::SetNext (IntNode * newNext)
{
	this->next = newNext;
}

void IntNode::SetPrev (IntNode * newPrev)
{
	this->prev = newPrev;
}
