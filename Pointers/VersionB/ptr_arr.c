#include <stdio.h>

int main(){
	
	char string[] = {'h', 'e', 'l', 'l'};
	char string2[] = "hello";
	
	char* strPtr = string;
	
	char* charPtr = "World!";
	
	int iter;
	for(iter = 0; iter < 20; iter++){
		printf("%c\n", charPtr[iter]);
	}
	
	
	char* charPtr0 = charPtr;
	
	printf("%c", charPtr[0]);
	
	printf("%c", charPtr0);
	
}
