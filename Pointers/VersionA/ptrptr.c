#include <stdio.h>

int main(){
	
	char c1 = 'Q'; //1
	
	char* c1Ptr = &c1; //2
	
	printf("Address of c1 is %p and the value is %c\n", c1Ptr, c1);
	
	char** c1PtrPtr = &c1Ptr; //3
	
	printf("Address of c1PtrPtr is %p and the value is %p which is the Address of c1\n\n",
	 c1PtrPtr, *c1PtrPtr);
  
  	char cVal = **c1PtrPtr; //4
	
	c1 = 'R'; //5
	
	printf("c1 was %c\n", cVal);
	
	printf("c1 is now %c\n", **c1PtrPtr);
	
}
