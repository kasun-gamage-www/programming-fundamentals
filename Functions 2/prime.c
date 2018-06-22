#include<stdio.h>
int isPrime(int);

int main(){
	printf("is 25 prime : %d\n", isPrime(25));
	printf("is 13 prime : %d\n", isPrime(13));
	printf("is 17 prime : %d\n", isPrime(17));
	printf("is 99 prime : %d\n", isPrime(99));
}

int isPrime(int userNumber){
	int currNumber;
	for(currNumber = userNumber - 1; currNumber > 1; currNumber--){
		if(userNumber % currNumber == 0){
			return 0;
		}
	}
	return 1;
}
