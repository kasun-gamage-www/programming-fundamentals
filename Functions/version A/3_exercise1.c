//a function that outputs the product(muliplication of the vals) of three integers

//a function that converts a celcius value to farenheit(i/o can be decimal)
// c * 1.8 + 32

//a function that prints a grid of stars with the edge size given
/*

input : 2			input : 5

**					*****
**					*****
					*****
					*****
					*****
*/
#include<stdio.h>

int product(int, int, int);
float celciusToFaren(float);

int main(){
	printf("output test product = %i\n", product(10, 10, 35));
	printf("output test c to f = %f", celciusToFaren(10));
}
   
int product(int num1, int num2, int num3){
	return num1 * num2 * num3;
}

float celciusToFaren(float celVal){
	return celVal * 1.8 + 32;
}
