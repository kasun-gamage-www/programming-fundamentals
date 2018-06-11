//function that adds, subtracts, multiplies or divides 2 numbers
//based on a symbol passed as the 3rd argument
#include <stdio.h>

int calc(int, int, char);

//testing
int main(){
	printf("4 + 85 = %i\n", calc(4, 85, '+'));
	printf("74 - 45 = %i\n", calc(74, 45, '-'));
	printf("58 / 4 = %i\n", calc(58, 4, '/'));
	printf("156 * 88 = %i\n", calc(156, 88, '*'));
}

//actual function
int calc(int num1, int num2, char symbol){
	if(symbol == '+'){
		return num1 + num2;
	}else if(symbol == '-'){
		return num1 - num2;
	}else if(symbol == '*'){
		return num1 * num2;
	}else if(symbol == '/'){
		return num1 / num2;
	}
}
