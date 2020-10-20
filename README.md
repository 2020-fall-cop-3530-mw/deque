# Doubly-Linked Lists
The purpose of this group discussion exercise is to:
- Practice reproducing errors with code
- Replace manual program crashing steps with automated tests
- Troubleshoot a failing test executable using the Gnu debugger.

## Remaining Time
If your group finishes the first set of steps quickly, work through these steps until time runs out:
1. Fix the next error. Specifically, what happens if you try to read back out more data than you input.
	1. Fixing an error means first adding a test that reproduces the error.
1. Change the Insert method so that both pointers are correctly set, leaving the doubly-linked list in a valid state.
	1. This should include the `Deque::tail` pointer as well.
	1. Add tests to assert the _correct_ behavior before writing the code. That way you'll know when it works correctly.
1. Change the Delete method so that both pointers are correctly set, leaving the doubly-linked list in a valid state.
	1. This should include the `Deque::tail` pointer as well.
	1. Test.
1. Implement Insert and Delete operations for the tail.
1. Pat yourself on the back, because I expect the stuff above to take far longer than we have in this class period.

## GDB
- Must compile all files with the `-g` flag.
- To run, use `gdb -tui test/test`, or whichever executable is needed.
- Set a breakpoint using `break LOCATION` where `LOCATION` is a function name, or file name followed by colon and the line number, e.g. `break file.cpp:27`.
- `run`.
- `step` or `next` as needed to get to a _suspicious_ point in the code.
- Use `print` to print variables as needed. This is standard C++ syntax, so pointers can be dereferenced with `*`, functions can be called, etc.
