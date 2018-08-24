/*
Create an integer array of size 5

1. Consider the 0th element as a pointer and set its value to 666

2. Consider the 1st element as an array element and set its value to 555

3. Store the address of the 2nd element in a variable and use it to set the value
	to  444
	
4. Using the above variable and pointer arithmatic set the value of the 3rd element to
	333
	
5. Store the address of the address of th 4th element in a variable and use it to
	set the value to 222

*/
#include <stdio.h>

int main(){
	int array[5];
	
	*array = 666;
	
	array[1] = 555;
	
	int* indexOf2 = &array[2];
	*indexOf2 = 444;
	
	*(indexOf2 + 1) = 333;
	
	int* addressOf4 = &array[4];
	int** addressOfaddressOf4 = &addressOf4;
	**addressOfaddressOf4 = 222;
	
	int k;
	for(k = 0; k < 5; k++){
		printf("array[%i] = %i\n", k, array[k]);
	}
}
