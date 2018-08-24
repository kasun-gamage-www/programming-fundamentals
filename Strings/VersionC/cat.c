#include <stdio.h>
#include <string.h>

int main(){
	
	char string1[15] = "hello";
	
	char string2[] = "world!";
	
	strcat(string1, " ");
	strcat(string1, string2);
	
	strncat(string1, "hi..................", 4);
	
	printf("String1 = %s\n", string1);
	printf("String2 = %s\n", string2);
	
	//str2 + str3
	
}
