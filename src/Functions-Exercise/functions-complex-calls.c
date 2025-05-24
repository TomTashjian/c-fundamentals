#include <stdio.h>
#include <stdbool.h>

int f2(); //prototype

int f1(){
	printf("f1()\n");
	return f2();
}

int f2(){
	printf("f2()\n");
	return 2;
}

int f3(){
	printf("f3()\n");
	return 3;
}

int f4(){
	printf("f4()\n");
	return 4;
}

int foo(int a, int b, int c, int d){
	printf("foo()\n");
	printf("a == %d\n",a);
	return f3() + f4();
}

bool op1();
bool op2();

int main()
{
	foo(f1(), 2, 3, 4);
	if (op1() || op2()){ //compiler will optimize and not call second condition "op2()"
		printf("yes\n");
	}else{
		printf("no\n");
	}
}

bool op1(){
	printf("op1()\n");
	return true;
}

bool op2(){
	printf("op2()\n");
	return true;
}
