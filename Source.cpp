#include "c:\Users\james\Desktop\std_lib_facilities.h"

//jp-industrial - calculator that can handle multiple expressions, reads left-right. 19/2/22

int main()
{
	cout << "Please enter expression (we can handle +, *, -, /)\n";
	cout << "Add an 'x' to the end of the expression to specify the end, i.e. 3+2/4x\n";

	int lval = 0;
	int rval = 0;

	cin >> lval; //read leftmost operand
	if (!cin) error("No left operand\n");

	for (char op = ' '; cin >> op;) {
		if (op != 'x') cin >> rval;
		if (!cin) error("No right operand");

		switch (op) {
		case '+':
			lval += rval;
			break;
		case '-':
			lval -= rval;
			break;
		case '*':
			lval *= rval;
			break;
		case '/':
			lval /= rval;
			break;
		default:
			cout << "Result: " << lval << '\n';
			keep_window_open();

		}
	}
	error("bad expression");
}