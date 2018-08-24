#include <stdio.h>

int main(){
	
	int x;
	x= 100;
	int* xPtr = &x;
	int** xPtrPtr = &xPtr;
	
	pointersGuess();
	
}

void pointersGuess(){
	char val = 'A';
	char* valPtr = &val;
	
	printf("value at %p is %c\n", valPtr, val);
	printf("address of valPtr is = %p\n", &valPtr);
	
	char val2 = *valPtr;
	*valPtr = 'T';
	
	printf("val2 is = %c\n", val2);
	printf("val is = %c\n", val);
	
	char** ptrPtr = &valPtr;
	
	**ptrPtr = 'X';
	*valPtr = 45665165;
	
	printf("val is = %c\n", val);
	printf("val2 is = %c\n", val2);
	
	printf("ptrPtr leads to = %p\n", ptrPtr);
	printf("valPtr leads to = %p\n", valPtr);

}
