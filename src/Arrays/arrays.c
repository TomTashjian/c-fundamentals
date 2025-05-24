#include <stdio.h>

int main ()
{
	int arr[8];
	printf("Please enter 8 numbers: ");
	int index = 0;
	while (index < 8)
	{
		scanf("%d", &arr[index]);
		++index;
	}

	// print maximum number
	index = 1;
	int max = arr[0];
	while (index < 8)
	{
		if (max < arr[index]) {
			max = arr[index];
		}
		++index;
	}
	printf("max == %d \n", max);
	
	// calculate sum of array elements (user values) and print
	index = 0;
	int sum = 0;
	while (index < 8)
	{
		sum += arr[index];
		++index;
	}
	printf("sum == %d \n", sum);

	printf("finish!\n");
	return 0;
}
