#include <iostream>
#include <string>
#include "int-node.hpp"
#include "deque.hpp"

const std::string GET_NUMBERS_PROMPT = "Enter integers to add (non-int ends input): ";

int main ()
{
	Deque d;
	int value;
	std::cout << GET_NUMBERS_PROMPT;
	while (std::cin >> value)
	{
		d.InsertAtHead(value);
		std::cout << GET_NUMBERS_PROMPT;
	}
	// last input was could not be read into an int, throw the input out
	std::cin.clear();
	std::cin.ignore(1028, '\n');

	char yn;
	while (true)
	{
		std::cout << "Get next value (y/n)? ";
		std::cin >> yn;
		if (yn == 'y')
		{
			std::cout << d.Peek() << std::endl;
			d.DeleteFromHead();
		}
		else
		{
			break;
		}
	}

	return 0;
}
