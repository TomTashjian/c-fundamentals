#include<stdio.h>

//recursive function
void f(int x){
	if(x == 0){
		return;
	}
	printf("Hello\n");
	f(x - 1);
}

int factorial(int n){
	if( n == 1) { return 1;}
	return n*factorial(n - 1);
}

int main()
{
	f(3); //prints Hello 3 times
	int factorialOf4 = factorial(4); 
	printf("factorialOf4 == %d\n", factorialOf4); //prints 24 which is equal to 4!
}
