#include <stdio.h>

int main ()
{
	int a = 0;
	int b = 0;
	char opcode = '+'; //defualt is sum

	printf("Please enter the first operand: \n");
	scanf("%d", &a);
	
	printf("Please enter the second operand: \n");
	scanf("%d", &b);

	printf("Please enter the opertaor type ('+', '-', '*', '/'): \n");
	scanf("%c \n", &opcode);

	if (opcode == '+'){
		printf("Result (sum) = %d \n", (a + b));
	} else if (opcode == '-'){
		printf("Result (subtraction) = %d \n", (a - b));
	} else if (opcode == '*'){
		printf("Result (multiplication) = %d \n", (a * b));
	} else if (opcode == '/'){
		if (b == 0){
			printf("division by 0, undefined! \n");
		} else {
			printf("Result (division) = %d \n", (a / b));
		}
	} else{
		printf("Invalid Operator \n");
	}

	printf("end of program \n");
}
