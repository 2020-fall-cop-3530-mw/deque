#define CATCH_CONFIG_MAIN

#include "catch/catch.hpp"
#include "../int-node.hpp"
#include "../deque.hpp"

TEST_CASE("Test IntNode class")
{
	IntNode n1(2);
	REQUIRE(2 == n1.GetValue());
}

TEST_CASE("Test Deque class")
{
	Deque d;
	d.InsertAtHead(12);
	REQUIRE(12 == d.Peek());
	d.InsertAtHead(5);
	REQUIRE(5 == d.Peek());

	d.DeleteFromHead(); // take 5 back out
}

// Compile & run:
// make clean test
