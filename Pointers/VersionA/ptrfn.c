#include <stdio.h>

int calcCube(int);
int calcCubeRef(int*);

int main(){
	int val;
	val = 5;
	
	int arr[5];
	
	arr[0] = 50;
	
	printf("%i\n", calcCube(val));//pass by value
	
	printf("after passing by value. value of val is = %i\n", val);
	
	val = 10;
	
	printf("%i\n", calcCubeRef(&val));
	
	printf("after passing by ref. value of val is = %i\n", val);
	
	printf("%i\n", calcCubeRef(arr));
}

int calcCube(int val){
	int valOfvar = val;
	int cube = valOfvar * valOfvar * valOfvar;
	val = 222;
	return cube;
}

int calcCubeRef(int* val){
	int valOfvar = *val;
	int cube = valOfvar * valOfvar * valOfvar;
	*val = 333;
	return cube;
}




