#include <stdio.h>

int main(){
		
	int x;
	x = 66;
	
	printf("line 9 : x is %i\n", x);
	
	int* xPtr = &x;
	//char*, long*, double*, float*.....
	
	printf("%p\n", xPtr);
	
	*xPtr = 33;
	
	printf("line 18 : x is %i\n", x);
	
	x = 100;
	
	int y = *xPtr;
	
	printf("%i", y);
}
