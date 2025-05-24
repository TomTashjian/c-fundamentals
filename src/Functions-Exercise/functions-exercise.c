#include <stdio.h>
#include <stdbool.h>

int average(int a, int b, int c){
	int avg = (a + b + c) / 3;
	return avg;
}

bool is_even(int num){
	return num % 2 == 0;
}

bool is_odd(int num){
	return !is_even(num);
}

int calculate(char ch, int a, int b){
	switch(ch){
		case '+':
			return a + b;
		case '-':
			return a + b;
		case '*':
			return a * b;
		case '/':
			if (b != 0){
				return a / b;
			}
		default:
			return 0;
	}
}

int max (int a, int b){
	return a > b ? a : b; // using the ternary operator ?: <expression ? true-case-expression : false-case-expression>
}

int main()
{
	int a;
	int b;
	int c;
	char ch;
	printf("enter 3 numbers to calculate their average:\n");
	scanf(" %d%d%d", &a, &b, &c);
	printf("average = %d\n", average(a, b, c));
	printf("enter a number to check if it's odd:\n");
	scanf(" %d", &a);
	printf("is odd: %d\n", is_odd(a));
	printf("enter 2 numbers to find maximum:\n");
	scanf(" %d%d", &a, &b);
	printf("max: %d\n", max(a, b));	
	printf("enter 1st operand, arithmetic operation and 2nd operand to preform an arithmetic calculation:\n");
	scanf("%d %c%d", &a, &ch, &b);
	printf("result: %d\n", calculate(ch, a, b));
}
