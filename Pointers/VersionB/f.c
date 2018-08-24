#include <stdio.h>

int cube(int);
int cubeRef(int*);

int arrRef(int*, int);

int main(){
	int x;
	int arr[10] = {10,545,4656,5465456,454};
	
	int i;
	
	x = 50;
	
	for(i= 0; i < sizeof(arr) / sizeof(arr[0]); i++){
		printf("%i\n", arr[i]);	
	}
	
	printf("%i\n", cube(x));
	printf("%i\n", x);
	
	printf("%i\n", cubeRef(&x));
	printf("%i\n", x);
	
	arrRef(arr, sizeof(arr) / sizeof(arr[0]));
}

int cube(int val){
	int cube = val * val * val;
	val = 456;
	return cube;
}

int cubeRef(int* val){
	int value = *val;
	int cube = value * value * value;
	*val = 13;
	return cube;
}

int arrRef(int* arr, int size){
	printf("%i", sizeof(arr));
	int i;
	for(i= 0; i < size; i++){
		printf("%i\n", arr[i]);	
	}
}



