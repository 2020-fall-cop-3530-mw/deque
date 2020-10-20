CXX = g++
CXXFLAGS = -Wall -std=c++11

main: deque.o int-node.o main.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	$(RM) main *.o test/test

testBuild: test/test.cpp deque.o int-node.o
	$(RM) *.gc*
	$(CXX) $(CXXFLAGS) -Itest/catch -o test/test $^

test: testBuild
	test/test --success
