/*
write a function that adds/subtracts/ divides/ multiplies
two numbers
based on the first input(argument)

if the first argument is +
then add .....


what am I to do with these two numbers;
what is the first number? Please tell whole numbers only.
what is the second number? Please tell whole numbers only.

answer : I will tell the sum/diff/product/div of the two numbers, which is an integer

*/
#include <stdio.h>

int calculate(char symbol, int num1, int num2){
	if(symbol == '+'){
	 return num1 + num2;
	}else if(symbol == '-'){
	 return num1 - num2;
	}else if(symbol == 'm'){//based on the symbol calc will be done
	 return num1 * num2;
	}else if(symbol == '/'){
	 return num1 / num2;
	}
}

//testing
int main(){
	printf("78 + 46 = %d\n", calculate('+', 78, 46));
	printf("71 - 14 = %d\n", calculate('-', 71, 14));
	printf("444 * 48745 = %d\n", calculate('m', 444, 48745));
	printf("599 / 9 = %d\n", calculate('/', 599, 9));
}
