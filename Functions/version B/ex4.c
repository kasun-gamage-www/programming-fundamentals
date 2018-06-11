// write a function that takes a number as an input
// and prints out all the even numbers from 0 upto the given number

// even number(s) : when the number is divided by 2 there is no remainder
// 2, 4, 6, 8, 10, 12, 14 .......

#include <stdio.h>

void evenNumbers(int num){
	int i;
	for(i = 1; i <= num; i++){
		if(i % 2 == 0){
			printf("%i\n", i);
		}
	}
}

//testing only
int main(){
	evenNumbers(10);
}
