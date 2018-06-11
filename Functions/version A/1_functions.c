#include <stdio.h>

int calc(int firstNum, int secondNum){
	int sum = firstNum + secondNum;
	return sum;
}

int main(){
	int x, y;
	printf("enter first num = ");
	scanf("%i", &x);
	printf("enter second num = ");
	scanf("%i", &y);
	
	printf("first number is=%i, second number is %d\n", x, y);
	int sum1 = calc(x, y);
	printf("first sum is %d\n", sum1);
	int sum2 = calc(x, 50);
	printf("second sum is %d\n", sum2);
	int sum3 = calc(y, 33);
	printf("third sum is %d\n", sum3);
	
}
