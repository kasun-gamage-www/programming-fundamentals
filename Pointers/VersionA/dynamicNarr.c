#include <stdio.h>
#include <stdlib.h>

int main(){
	//dynamic mem alloc
	int* xPtr = (int*) malloc(sizeof(int));
	    
	*xPtr = 50;
	
	printf("value at %p is %i\n\n", xPtr, *xPtr);
	
	//arrays
	char str[] = "string";
	
	printf("%c", str[0]);
	printf("%c", str[1]);
	printf("%c", str[2]);	
	
	printf("%c", *str);
	printf("%c", *(str + 1));//pointer arithmatic
	printf("%c", *(str + 2));
	printf("%c", *(str + 3));
}
