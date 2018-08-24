#include <stdio.h>

int main(){
	long q;
	q = 50;
	
	long* qPtr = &q;
	
	long** qPtrPtr = &qPtr;
	
	int r = **qPtrPtr;
	
	printf("%i\n", r); // 50
	
	**qPtrPtr = 789;
	
	printf("%i\n", q); // 789
	
}
