#include <stdio.h>

int main(){
	int size;
	
	printf("How many characters will you enter?\n");
	scanf("%d", &size);
	
	char str[size];
	
	int i;
	for(i = 0; i < size; i++){
		printf("Enter char %i : \n", i);
		gets(str);
	}
	
	int j;
	for(j = size; j > 0; j--){
		printf("%c", str[j]);
	}
	
	getchar();
	getchar();
	getchar();
}
