#include <stdio.h>

int main(){
	
	char str[] = "hello";
	
	str[0] = 'w'; // array notation
	*str = 'd';	  // pointer notation
	
	printf("%s\n", str);
	
	char* str2 = "world"; //similar to char str[] = "hello";
	
	printf("%c\n", str2[2]);
	
	printf("str = %p\n", str);
	printf("value at str = %c\n", *str);
	
	printf("str + 1 = %p\n", (str + 1));
	printf("value at str + 1 = %c\n", *(str + 1));
	
}
