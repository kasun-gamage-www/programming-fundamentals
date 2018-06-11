//write a function that adds, subtracts, multiplies or divides two
//numbers based on the 3rd parameter

//write a function to calculate average using the above function

//testing :
//pass different numbers from the main() as args to test
//give the user option to select what to do with the numbers provided
//(add, subs, multi, divide, average of 2)
//display the relevant output

//additional task : abstract out the functionality of the CLI to a function
// that runs infinitely until terminated by the user.

#include <stdio.h>

int calculate(int, int, char);
int average(int, int);
void grid(int);

int main(){
	printf("98 + 45 = %d\n", calculate(98, 45, '+'));
	printf("49 * 45 = %d\n", calculate(49, 45, '*'));
	printf("76 / 4 = %d\n", calculate(76, 4, '/'));
	printf("999 - 666 = %d\n", calculate(999, 666, '-'));
	
	printf("average of 794 and 149 = %d", average(794, 149));
	
	grid(5);
}

int calculate(int x, int y, char opCode){
	if(opCode == '+'){
		return x + y;
	}else if(opCode == '-'){
		return x - y;
	}else if(opCode == '*'){
		return x * y;
	}else if(opCode == '/'){
		return x / y;
	}
}

int average(int x, int y){
	return calculate(x, y, '+') / 2;
}

void grid(int edgeSize){
	int i;
	for(i = 0; i <= edgeSize * edgeSize; i++){
		printf("*");
		if(i % edgeSize == 0){
			printf("\n");
		}
	}
}
