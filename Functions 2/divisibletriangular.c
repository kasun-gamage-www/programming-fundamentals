#include <stdio.h>
int divisibleTriangular(int);

int main(){
	printf("%d", divisibleTriangular(6));
}

int divisibleTriangular(int num){
	int i, j, triangular;
	triangular = 0;
	for(i = 1; i <= num + 1; i++){
		triangular = triangular + i; // triangular += i; - short hand
	}
	for(j = triangular - 1; j > 1; j--){
		if(triangular % j == 0){
			return j;
		}
	}
	return -1;
}
