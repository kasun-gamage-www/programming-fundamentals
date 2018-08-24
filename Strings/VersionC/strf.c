#include <stdio.h>
#include <string.h>


//strcpy
//strcmp
//strcat

int main(){
	
	char string1[] = "Some string with a lot of chars";
	
	char string2[] = "copy this";
	
	
//	strcpy(string1, string2);
	
//	printf("String1 = %s\n", string1);
//	printf("String2 = %s\n", string2);
	
	strncpy(string2, string1, 3);
	
	printf("String1 = %s\n", string1);
	printf("String2 = %s\n", string2);
}
