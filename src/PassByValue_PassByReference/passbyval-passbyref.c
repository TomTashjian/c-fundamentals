#include<stdio.h>

void f(int x){
	x = 44;
}

void f2(int* x){
	*x = 44;
}

void swap(int* pa, int* pb){
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}

void print_array(int* arr, int size){
	for(int i = 0; i < size; ++i){
		printf("%d\n", arr[i]);
	}
}

int main()
{
	//simple example
	int num = 13;
	printf("%d\n", num); //13
	f(num); //Pass By Value
	printf("%d\n", num); //13
	f2(&num); //Pass By Reference
	printf("%d\n", num); //44

	//swap example
	int a = 4;
	int b = 5;
	printf("a = %d, b = %d\n", a ,b);
	swap(&a, &b);
	printf("a = %d, b = %d\n", a ,b);

	//function that operates on an array example
	int arr[] = {1, 2, 3, 4};
	print_array(arr, sizeof(arr) / sizeof(arr[0]));
}
