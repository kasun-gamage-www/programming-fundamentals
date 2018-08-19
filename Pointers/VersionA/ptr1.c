#include <stdio.h>

int main(){
	
	int x;
	
	x = 100;
	
	float y;
	
	int* xPtr = &x;
	
	float* yPtr = &y;
	
	int** xPtrPtr = &xPtr;
	
	printf("%i\n", xPtr);
	printf("%i\n", yPtr);
	
	int xVal = **xPtrPtr;
	
	printf("%i\n", xVal);
	
	**xPtrPtr = 50;
	
	printf("%i\n", x);
	
}
