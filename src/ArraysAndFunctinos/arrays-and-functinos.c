#include<stdio.h>

void print_array(double* arr, int size){
	for( int i = 0; i < size; ++i){
		printf("%lf\n", *(arr + i));
	}
}

double sum(double* arr, int size){
	double result = 0;
	for(int i = 0; i < size; ++i){
		result += arr[i];
	}
	return result;
}

int find(double* arr, int size, double num){
	for(int i = 0; i < size; ++i){
		if(arr[i] == num){
			return i;
		}
	}
	return -1;
}

int main()
{
	double arr[] = {1.0, 2.1, 3.2, 4.4};
	const int size = sizeof(arr) / sizeof(arr[0]);
	print_array(arr, size);
	double sum_result = sum(arr, size);
	printf("sum == %lf\n", sum_result);
	printf("find result index == %d\n", find(arr, size, 4.4));
	printf("find result index == %d\n", find(arr, size, 4.9));
}
