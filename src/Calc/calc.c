#include <stdio.h>

int main ()
{
	int a = 0;
	int b = 0;
	char opcode = '+'; //defualt is sum

	printf("\tWelcome to the Simple Calculator program! \n");
	printf("Please enter the first number: ");
	scanf("%d", &a);
	printf("Please enter the second number: ");
	scanf("%d", &b);
	printf("Please enter the operation type (+, -, *, /): ");
	scanf(" %c", &opcode);
	
	switch (opcode)
	{
		case '+':
			printf("Result (sum) = %d \n", (a + b));
			break;
		case '-':
			printf("Result (subtraction) = %d \n", (a - b));
			break;
		case '*':
			printf("Result (multiplication) = %d \n", (a * b));
			break;
		case '/':
			if (b == 0) {
				printf("division by 0, undefined! \n");
			} else {
				printf("Result (division) = %d \n", (a / b));
			}
			break;
		default:
			printf("Invalid Operator \n");
	}

//	if (opcode == '+') {
//		printf("Result (sum) = %d \n", (a + b));
//	} else if (opcode == '-') {
//		printf("Result (subtraction) = %d \n", (a - b));
//	} else if (opcode == '*') {
//		printf("Result (multiplication) = %d \n", (a * b));
//	} else if (opcode == '/') {
//		if (b == 0) {
//			printf("division by 0, undefined! \n");
//		} else {
//			printf("Result (division) = %d \n", (a / b));
//		}
//	} else {
//		printf("Invalid Operator \n");
//	}
	
	printf("Thanks for using the Simple Calculator! \n");

	return 0;
}
