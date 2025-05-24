#include <stdio.h>

int main()
{
	int number = 0;
	int sum = 0;
	printf("Please enter your first number: ");
	scanf("%d", &number);
	sum += number;
	
	printf("Please enter your second number: ");
	scanf("%d", &number);
	sum += number;
	
	printf("Please enter your third number: ");
	scanf("%d", &number);
	sum += number;
	
	printf("sum ==  %d \n", sum);
}
