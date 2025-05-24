#include <stdio.h> // standard input and output
#include <stdint.h> // typedefs of integer types with exact widths
#include <stdbool.h> // "bool" data type
#include <limits.h> // contains definitions of data type minimum and maximum
#include <float.h> // floating point number minimum and maximum and etc.

int main()
{
	unsigned char ch = 'a'; // 1 byte
	short sh = 1440; // 2 bytes
	int i = 5555; // 4 bytes
	printf("size of char == %lu \n", sizeof(char));
	printf("size of short == %lu \n", sizeof(short));
	printf("size of integer == %lu \n", sizeof(int));
	printf("size of long == %lu \n", sizeof(long));
	printf("size of long long == %lu \n", sizeof(long long));
	printf("size of float == %lu \n", sizeof(float));
	printf("size of double == %lu \n", sizeof(double));
	printf("size of long double == %lu \n", sizeof(long double));
	printf("size of int8_t == %lu \n", sizeof(int8_t));
	printf("size of uint8_t == %lu \n", sizeof(uint8_t));
	printf("size of int16_t == %lu \n", sizeof(int16_t));
	printf("size of uint16_t == %lu \n", sizeof(uint16_t));
	printf("size of int32_t == %lu \n", sizeof(int32_t));
	printf("size of uint32_t == %lu \n", sizeof(uint32_t));
	printf("size of bool == %lu \n", sizeof(bool));
	printf("CHAR_MIN == %d \n", CHAR_MIN);
	printf("CHAR_MAX == %d \n", CHAR_MAX);
	printf("SHORT_MIN == %d \n", SHRT_MIN);
	printf("SHORT_MAX == %d \n", SHRT_MAX);
	printf("INT_MIN == %d \n", INT_MIN);
	printf("INT_MAX == %d \n", INT_MAX);
	printf("LONG_MIN == %ld \n", LONG_MIN);
	printf("LONG_MAX == %ld \n", LONG_MAX);
	printf("LLONG_MIN == %lld \n", LLONG_MIN);
	printf("LLONG_MAX == %lld \n", LLONG_MAX);
	printf("FLT_MIN == %e \n", FLT_MIN);
	printf("FLT_MAX == %e \n", FLT_MAX);
	printf("DBL_MIN == %e \n", DBL_MIN);
	printf("DBL_MAX == %e \n", DBL_MAX);
	printf("LDBL_MIN == %Le \n", LDBL_MIN);
	printf("LDBL_MAX == %Le \n", LDBL_MAX);

}
