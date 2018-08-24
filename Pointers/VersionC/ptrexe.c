#include <stdio.h>

int main(){
	int val;
	int* ptr = &val;
	int val2 = *ptr;
	val = 56;
	*ptr = 39;
	int val3 = *ptr;
	int* ptr2 = 4616861;
	int ptr3 = ptr;
	int val4 = val3;
	*ptr = 77;
//	int val5 = *ptr2; //may crash the program
	int val6 = 	*ptr;
	
	printf("%i\n", val);	//77
	printf("%i\n", val2);	//garbage (probably 0)
	printf("%i\n", val3);	//39
	printf("%i\n", val4);	//39
//	printf("%i\n", val5);	//Garbage
	printf("%i\n", val6);	//77
	
	printf("%p\n", ptr);	//Address of val
	printf("%p\n", ptr2);	//4616861 in hex
	printf("%p\n", ptr3);	//Address of val
		
}
