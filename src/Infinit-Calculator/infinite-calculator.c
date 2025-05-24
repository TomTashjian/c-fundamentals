#include <stdio.h>

int main()
{
	char op_code; // arithmetic operation code: '+', '-', '*', '/' and '@' (for end program)
	int num1;
	int num2;

	printf("Please enter an arithmetic operation character or @ to quit program \n");
	scanf("%c", &op_code);

	while (op_code != '@') {

		printf("Please eneter two numbers: \n");
		scanf("%d %d", &num1, &num2);
		
		switch (op_code) 
		{
			case '+':
				printf("Sum == %d \n", num1 + num2);
				break;
			case '-':
				printf("Subtraction == %d \n", num1 - num2);
				break;
			case '*':
				printf("Multiplication == %d \n", num1 * num2);
				break;
			case '/':
				if (num2 != 0) {
					printf("Division == %d \n", num1 / num2);
				}
				break;
			default:
				printf("arithmeitc character was incorrect, please enter one of th following: '+', '-', '*', '/' \n");
		}

		printf("Please enter an arithmetic operation character or @ to quit program \n");
		scanf(" %c", &op_code);
	}
}

