//write a function that uses the function written in ex1 to calculate the
//average of two numbers

//advanced task : write a function that uses the function written in ex1 to
//calculate the average of three numbers

// + should not be done in your function
#include<stdio.h>

int calc(int, int, char);
int average(int, int);

int main(){
	printf("%i\n", average(50, 100));
	printf("%i\n", average(49, 560));
	printf("%i\n", average(456658, 5156056));
	
	printf("%i\n", averageAdvanced(33, 66, 99));
}

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

int average(int num1, int num2){
	return calc(num1, num2, '+')/2;
}

int averageAdvanced(int num1, int num2, int num3){
	return calc(calc(num1, num2, '+'), num3, '+') / 3;
}

