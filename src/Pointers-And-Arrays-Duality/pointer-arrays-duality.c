#include <stdio.h>

int main ()
{
	int const size = 4;
	int arr[size];
	arr[0] = 44;
	arr[1] = 55;
	arr[2] = 66;
	arr[3] = 77;

	//demonstrating step by step the duality of arrays and pointers
	printf("ex.1\n");
	const int* p = &arr[0];
	printf("%d\n", *p); // 44, derefence p and print
	p = &arr[1]; // no error, const is for what p is pointing to
	printf("%d\n", *p); // 55
	
	printf("ex.2\n");
	p = &arr[0];
	int value = *(p + 2); // increment address with (size of int)*2 and dereference and assign
	printf("%d\n", value); // 66
	
	printf("ex.3\n");
	for (int i = 0; i < size; ++i){
		printf("%d\n", arr[i]);
	}
	
	printf("ex.4\n");
	for (int i = 0; i < size; ++i){
		printf("%d\n", *(p + i));
	}

	printf("ex.5\n");
	int* p2 = &arr[3];
	for (int i = 0; i < size; ++i){
		printf("%d\n", *(p2 - i));
	}
	
	printf("ex.6\n");
	// name of an array is a pointer to its first element
	// in this example, "arr" is similar to: int* arr = &arr[0];
	for (int i = 0; i < size; ++i){
		printf("%d\n", *(arr + i));
	}	
	
	printf("ex.7\n");
	// example operations
	for (int i = 0; i < size; ++i){
		*(arr + i) = *(arr + i) + 2; // adds 2 to every element
	}

	printf("ex.8\n");
	// arr[2] == *(arr + 2)
	// *(2 + arr) == 2[arr]
	for (int i = 0; i < size; ++i){
		printf("%d\n", i[arr]); // i[arr] ----> *(i + arr)
	}

	printf("ex.9\n");
	// an exception to the statement the name of the array decays to a pointer to its first element
	// is the sizeof() operator
	printf("%lu\n", sizeof(arr)); // this returns the number of bytes of the whole array
	printf("%lu\n", sizeof(arr) / sizeof(arr[0])); // a common way to calculate arrays elements count
}
