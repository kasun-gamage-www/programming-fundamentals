#include <stdio.h>

int main(){
	int val1 = 7952;
	
	int* valPtr = &val1;
	
	val1 = 8899;
	
	printf("%i\n", val1);
	
	printf("%p\n", valPtr);
}
