#include <stdio.h>
int powerOf(int, int);

int main(){
	int result = powerOf(3, 2);
	printf("%d\n", result);
	
	result = powerOf(2, 4);
	printf("%d\n", result);
}

int powerOf(int base, int exponent){
	int i, output;
	output = 1;
	for(i = 1; i <= exponent; i++){
		output = output * base;
	}
	return output;
}
