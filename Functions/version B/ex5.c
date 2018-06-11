//5.1 write a function that converts a farenheit value to celcius
// c = (f - 32) / 1.8
// input/ output can be decimal

float farToCelcius(float farenVal){
	return (farenVal - 32) / 1.8;
}

//5.2 write a function that outputs 'Y' if the number passed as input is odd,
// otherwise 'N'; odd number(s) : when the number is divided by 2 remainder is 1

char isOdd(int number){
	if(number % 2 == 1){
		return 'Y';
	}else{
		return 'N';
	}
}

//5.3 write a function that will print out a 5 X 5 grid of *s

#include <stdio.h>

void grid(){
	int i;
	for(i = 0; i <= 25; i++){
		printf("*");
		if(i % 5 == 0){
			printf("\n");
		}
	}
}

//5.4 write a function that will print out a grid of *s with a given edge size

void gridWithEdge(int edgeSize){
	int i;
	for(i = 0; i <= edgeSize * edgeSize; i++){
		printf("*");
		if(i % edgeSize == 0){
			printf("\n");
		}
	}
}

//5.5 write a function that will output the value of
// (4852695564665 + 56846103455156 - 56491) * 2

long long algorithm(){ // no input : no parameters
	return (4852695564665l + 56846103455156l - 56491l) * 2l;
}

int main(){
	//testing code here
}

