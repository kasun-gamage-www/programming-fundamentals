#include <stdio.h>

int main(){
	int size, i;
	
	printf("How many characters ? ");
	scanf("%i", &size);
	
	char str[size]; //string
	
	for(i = 0; i < size; i++){
		printf("Enter character %i", i);
		scanf("%c", &str[i]);
	}
	
	for(i = size -1 ; i >= 0; i--){
		printf("%c", str[i]);
	}
	
}
