/*
1.1 write a function that outputs 'Y' if the input
is an even number, otherwise 'N'
When the number is divided by 2 if there
is no remainder (remainder is 0) then it's even

1.2 write a function that calculates the 
circumference of a circle based on the radius
c = 2 * (pie) * radius
assume (pie) = 3.14
decimals are allowed

1.3 write a function that prints a grid of *s
of size 5 X 5

*/
#include<stdio.h>
char isEven(int number);
float circumference(float radius);
void grid();

//for testing
int main(){
	printf("Is 45 even ? %c\n", isEven(45));
	printf("Is 78 even ? %c\n", isEven(78));
	
	printf("circumference of a circle with r=45.96 is %f\n", circumference(45.96));
	printf("circumference of a circle with r=2 is %f\n", circumference(2));

	grid();
}

void grid(){
	int i;
	for(i = 1 ; i <= 25; i++){
		printf("*");
		if(i % 5 == 0){
			printf("\n");
		}
	}
}

float circumference(float radius){
	return 6.28 * radius;
}

char isEven(int number){
	if(number % 2 == 0){
		return 'Y';
	}else{
		return 'N';
	}
}
