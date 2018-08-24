#include <stdio.h>
#include <string.h>

int main(){
	
	char str1[12] = "hello ";
	char str2[] = "world!";
	
	printf("str1 is \"%s\"\n", str1);
	
	strncat(str1, str2, 2);
	
	printf("str1 is \"%s\"\n", str1);
}
