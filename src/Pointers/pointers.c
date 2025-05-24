#include <stdio.h>

int main() 
{
	int x = 14;
	int* a;
	a = &x;
	
	printf("&x == %p \n", &x);
	printf("a == %p \n", a);
	printf("&a == %p \n", &a);
	
	printf("x == %d \n", x);
	*a = 10;
	printf("*a = 10 (indirect assignment)\n");
	printf("x == %d \n", x);
	printf("*a == %d \n", *a);
	printf("sizeof(a) == %ld \n", sizeof(a));
	printf("sizeof(x) == %ld \n", sizeof(x));

	printf("print (*a * *a) == %d \n", *a * *a);
	printf("x == %d \n", x);
	*a = *a * 2;
	printf("after (*a = *a * 2;), x == %d \n", x);
	*a *= 2;
	printf("after (*a *= 2;), x == %d \n", x);

	char ch = 'a';
	char* pch = &ch;
	printf("ch == %c \n", ch);
	printf("sizeof(pch) == %ld \n", sizeof(pch));
	printf("sizeof(ch) == %ld \n", sizeof(ch));

	int num = 0;
	printf("num == %d \n", num);
	char* p = (char*)&num;
	*(p + 1) = 1;
	printf("after \"char* p = &num;\" \nafter \"*(p+1) = 1;\" \nnum == %d \n", num);

	num = 0;
	printf("num == %d \n", num);
	short* psh = (short*)&num;
	*(psh + 1) = 1;
	printf("after \"short* psh = &num;\" \nafter \"*(psh+1) = 1;\" \nnum == %d \n", num);
}
