/*
2.1 write a function which calculates the average of two numbers
using the calculate function.
+ should not be done inside this function

2.2 advanced : write a function which calculates the average of "THREE" numbers
using the calculate function.
+ should not be done inside this function

2.3 Define a function similar to the grid exercise which prints out a grid of *s
with a given edge size

2.4 write a function that outputs the value of 4525 + 156216546 * 5414561 / 6
*/
#include <stdio.h>
int calculate(char symbol, int num1, int num2){
	if(symbol == 'p'){
	 return num1 + num2;
	}else if(symbol == 's'){
	 return num1 - num2;
	}else if(symbol == 'm'){
	 return num1 * num2;
	}else if(symbol == 'd'){
	 return num1 / num2;
	}
}

int average(int num1, int num2){
	return calculate('p', num1, num2)/2;
}

int averageOfThree(int num1, int num2, int num3){
	return calculate('p', calculate('p', num1, num2), num3)/3;
}

void grid(int edgeSize){
	int i;
	for(i = 1 ; i <= edgeSize * edgeSize; i++){
		printf("*");
		if(i % edgeSize == 0){
			printf("\n");
		}
	}
}

long calculation(){
	return 4525 + 156216546 * 5414561 / 6;
}

int main(){
	printf("%d\n", average(45, 82));
	printf("%d\n", averageOfThree(45, 82, 415));
	
	grid(8);
	
	printf("%d\n", calculation());
}
