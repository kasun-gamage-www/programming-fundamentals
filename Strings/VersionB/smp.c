#include <stdio.h>
#include <string.h>

int main(){
	
	char str1[] = "cat";
	char str2[] = "dog";
	
	if(strcmp(str1, str2) == 0){
		printf("Strings are equal");
	}else{
		printf("Strings are not equal");
	}
}
