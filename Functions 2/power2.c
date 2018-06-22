#include<stdio.h>
int powerOf(int, int);

int main(){
	printf("3 ^ 2 = %i\n", powerOf(3, 2));
	printf("2 ^ 4 = %i\n", powerOf(2, 4));
}

int powerOf(int base, int exponent){
	int i, output;
	output = 1;
	for(i = 0; i < exponent; i++){
		output = output * base; // output *= base; - short hand
	}
}
