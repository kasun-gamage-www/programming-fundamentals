//import necessary libraries
#include <stdio.h>

int calculate(int num1, int num2){
	int calc = num1 + num2;
	return num1 + num2;
}

int main(){
	//create 2 vars
	int x, y;
	//intialize : set their values
	x = 10;
	y = 22;
	//add them up
	int calc1 = calculate(x, y);
	printf("%d\n", calc1); //display
	
	int calc2 = calculate(x, 100);
	printf("%d\n", calc2);
	
	int calc3 = calculate(y, 36);
	printf("%d\n", calc3);
	
	return 0;
}
