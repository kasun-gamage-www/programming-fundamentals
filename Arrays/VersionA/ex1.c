#include <stdio.h>

float max();

float myArray[] = {14.45, 66, 489, 156.56, 1565, 16, 152561};

int main(){
	printf("Max value is %f", max());
}

float maxParam(int arr[]){} // This is valid. Array handling involves pointers.

float max(){
	int n, max = 0;
	for(n = 0; n < sizeof(myArray) / sizeof(myArray[0]); n++){
		printf("checking %d\n", n);
		if(myArray[n] > max) max = myArray[n];
	}
	return max;
}
