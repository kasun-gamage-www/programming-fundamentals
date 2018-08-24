#include<stdio.h>

int main(){
	int* jPtr = malloc(sizeof(int));
	
	*jPtr = 80;
	
	printf("%i", *jPtr);
	
}
