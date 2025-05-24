#include <stdio.h>

int main () 
{
	int age = 0;

	printf("do-while output: \n");
	
	age = 1;
	do {
		printf("%d \n", age);
		++age;
	} while(age <= 0);
	
	age = 1;
	printf("while output: \n");
	while (age <= 0) {
		printf("%d \n", age);
		++age;
	}

	age = 0;
	do {
		printf("Please enter your age: ");
		scanf("%d", &age);
	} while (age <= 0);

	printf("Thank You! \n");
}
