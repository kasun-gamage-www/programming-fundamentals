#include <stdio.h>
#include <stdlib.h>

int main(){
	int* arr = (int*) malloc(sizeof(int) * 5); //int arr[5];
	
	arr[0] = 999;
	
	int* index1 = &arr[1];
	
	*index1 = 888;
	
	*(index1 + 1) = 777;
	
	int* index3 = &arr[3];
	
	*index3 = 666;
	
	int** addressOfI3 = &index3;
	
	*(*addressOfI3 + 1)= 555;
	
	int iter;
	for(iter = 0; iter < 5; iter++){
		printf("array[%i] = %i\n", iter, arr[iter]);
	}
	    
}
