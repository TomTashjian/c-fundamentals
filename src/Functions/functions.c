#include <stdio.h>

//specifying a function's return value type is mandatory
void f(void) // void type in parameters (arguments) list is optional if no arguments
{
	printf("Hello World!\n");
	return; // optional if reutrn value type is void, also lines after this will not be executed
}

void f2()
{
	f(); // calling another function from this function
	int x = 20;
	printf("%d\n", x);
}

int less(double d, double d2)
{
	if (d < d2){
		return 1;
	}
	return 0;
}

//function prototype
int foo (int, int);

int main()
{
	printf("first\n");
	int x = 0;
	x = less(5.15, 4.14);
	printf ("x == %d\n", x);
	f2();
	foo(1,1);
	printf("last\n");
}

/*NOTE: if this function's prototype was not defined few lines above, 
this foo function would be not visible and undeclared for the compiler,
because it would come after the main function, but because there's a prototype,
the compiler searches for its implemenetation.
*/
//functoin implementation
int foo(int a, int b)
{
	printf("%d\n", a+b);
	return a+b;
}
