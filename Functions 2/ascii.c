#include <stdio.h>
int ascii(char);

int main(){
	printf("A = %i\n", ascii('A'));
	printf("B = %i\n", ascii('B'));
	printf("E = %i\n", ascii('E'));
	printf("$ = %i\n", ascii('$'));
}

int ascii(char character){
	return character;
}
