#include <stdio.h>
#include <string.h>

int main(){
	
	char str1[] = "hello";
	
	printf("str1 = %s\n", str1);
	
	char str2[10];
	
	strncpy(str2, str1, 5);
	
	str1[0] = 'w';
	str1[1] = 'o';
	
	printf("str1 = %s\n", str1);
	printf("str2 = %s\n", str2);
	
}
