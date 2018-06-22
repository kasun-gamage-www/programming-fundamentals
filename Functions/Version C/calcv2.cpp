/*

default vals : cpp

*/
#include <stdio.h>

int calculate(char symbol, int num1, int num2 = 10); //function prototype

int main(){
	printf("78 + 46 = %d\n", calculate('+', 78, 46));
	printf("71 - 14 = %d\n", calculate('-', 71, 14));
	printf("444 * 48745 = %d\n", calculate('m', 444, 48745));
	printf("444 * 48745 = %d\n", calculate('m', 444));
	printf("599 / 9 = %d\n", calculate('/', 599, 9));
}

int calculate(char symbol, int num1, int num2){
	if(symbol == '+'){
	 return num1 + num2;
	}else if(symbol == '-'){
	 return num1 - num2;
	}else if(symbol == 'm'){
	 return num1 * num2;
	}else if(symbol == '/'){
	 return num1 / num2;
	}
}
