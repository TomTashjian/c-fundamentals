#include <stdio.h>

int main() 
{
	printf("Decrement odd \n");
	for (int i = 10; i >= 1 ; --i) {
		if (i % 2 != 0) {
			printf("%d \n", i);
		}
	}

	printf("Increment even \n");
	for (int i = 1; i <= 10; ++i) {
		if (i % 2 == 0) {
			printf("%d \n", i);
		}
	}

	int arr[4];
	printf("please enter 4 numbers: ");	
	for (int i = 0; i <=3; ++i) {
		scanf("%d", &arr[i]);
	}
	int sum = 0;
	int prod = 1;
	for (int i = 3; i >= 0; --i) {
		sum += arr[i];
		prod *= arr[i];
	}
	printf("sum == %d \n", sum);
	printf("product == %d \n", prod);

	return 0;
}
