#include <stdio.h>
//#include <string.h>

int strlen(char* str){
	int count = 0;
	while(*(str + count) != '\0'){
		++count;
	}
	return count;
}

// In the standard library (string.h) version of strcpy(), the "src" argument type is "const char*", 
// this insures that the function will not modify the contents of "src",
// and allows the use of string literals.
void strcpy(char* dest, char* src){
	int length = strlen(src);
	for(int i = 0; i < length; ++i){
		dest[i] = src[i];
	}
	dest[length] = '\0';
}

int main()
{
	char str[] = "hello"; // contains \0 at the end. strings are standardized this way.
	//char str[6] = "hello"; //same as line above.
	//char str[] = {'h', 'e', 'l', 'l', 'o', '\0'}; // same as line above.
	//gets(str); // gets() is a depricated function, doesn't limit the amount of characters the user inputs, can cause segmentation fault or other security issues.
	fgets(str, sizeof(str), stdin); // inforces providing string size, but if provided larger than the actual provided string variable's size still causes security issues.
	puts(str); //prints string.
	printf("%s\n", str); // prints characters until it meets '\0'.
	
	//implementing strlen()	
	int size = strlen(str);
	printf("%d\n", size);

	//implementing strcpy()
	char str2[10];
	//str2 = str; // this will assign str address to str2, not copy its data.
	strcpy(str2, str);	
	printf("%s\n", str2);

	//using strcat() from string.h, which contcatinates strings.
	//strcat(str2, str);
	//printf("%s\n", str2);	
}
