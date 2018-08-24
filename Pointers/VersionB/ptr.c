#include <stdio.h>

int main(){
	
	int x;
	x = 10;
	
	int* xPtr = &x;
	//char* long*
	
	printf("%p\n", xPtr);
	
	int y = *xPtr;
	
	printf("%i\n", y);
	pointers();
	
}

void pointers(){
	int val;
	int* valPtr = &val;
	int val2 = *valPtr;
	*valPtr = 33;

	printf("address of val is %p val is %i", &val, val);
	printf("address of val2 is %p val2 is %i", &val2, val2);

}
