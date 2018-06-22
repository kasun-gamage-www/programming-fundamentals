#include<stdio.h>
int triangularDivisible(int);
int isPrime(int);

int main(){
	printf("%d", triangularDivisible(6));
}

int triangularDivisible(int userNumber){
	
	//find the relevant tri number
	int j, tri = 0;
	for(j = 1; j <= userNumber + 1; j++){
		tri = tri + j; // tri +=j; - short hand
	}
	if(!isPrime(tri)){
		//find the highest factor : divide by all numbers starting from 1 below the given number
		int k;
		for(k = tri - 1; k > 1; k--){
			if(tri % k == 0){
				//once a factor is found return it as output
				return k;
			}
		}
	}else{
		return -1;
	}
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
