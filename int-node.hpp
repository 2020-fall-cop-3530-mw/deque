#ifndef INT_NODE_HPP
#define INT_NODE_HPP

class IntNode
{
	private:
		int payload;
		IntNode * next;
		IntNode * prev;
	public:
		IntNode (int payload = 0, IntNode * prev = nullptr, IntNode * next = nullptr);
		IntNode * GetNext () const;
		IntNode * GetPrev () const;
		int GetValue () const;
		void SetNext (IntNode * newNext);
		void SetPrev (IntNode * newPrev);
};

#endif /*INT_NODE_HPP*/
