#include <stdio.h>

//f declaration
int calculate(int num1, int num2); // function prototype

int main(){
	int x, y;
	x = 10;
	y = 33;
	
	int sum = calculate(x, y);
	printf("%i\n", sum);
	
	int calc2 = calculate(x, 66);
	printf("%i\n", calc2);
	
	int calc3 = calculate(y, 75);
	printf("%i\n", calc3);
}

//f definition
int calculate(int num1, int num2){
	return num1 + num2;
}
