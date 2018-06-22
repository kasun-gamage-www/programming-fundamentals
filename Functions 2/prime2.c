#include<stdio.h>
int isPrime(int);

int main(){
	printf("Is 15 prime? : %d\n", isPrime(15));
	printf("Is 8 prime? : %d\n", isPrime(8));
	printf("Is 17 prime? : %d\n", isPrime(17));
	printf("Is 23 prime? : %d\n", isPrime(23));
	printf("Is 99 prime? : %d\n", isPrime(99));
	printf("Is 7 prime? : %d\n", isPrime(7));
}

int isPrime(int number){
	int i;
	for(i = 2; i < number; i++){
		if(number % i == 0){
			return 0;
		}
	}
	return 1;
}
