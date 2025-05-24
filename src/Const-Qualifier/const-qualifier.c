#include <stdio.h>

int main()
{
	int num = 42;
	int num2 = 43;
	const int cnum = 55;
	num =99;

	const int* cp1 = &num;
	cp1 = &num2; // ok
	*cp1 = 88; // error

	int* const cp2 = &num;
	cp2 = &num2; // error
	*cp2 = 88; // ok

	const int* const cp3 = &num;
	cp3 = &num2; //error
	*cp3 = 88; //error

	int* cp4 = &cnum; //warning
	*cp4 = 88; //ok, but not ok to do

	int* const cp5 = &cnum; //warning
}
