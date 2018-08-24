#include <stdio.h>
#include <string.h>

int main(){
	
	char* string1 = "elephant";
	char* string2 = "mouse";
	char* string3 = "mouse";
	
	strcmp(string1, string2); // string1 == string2 j : string1.equals(string2)
	
	if(strcmp(string1, string2) == 0){
		printf("Strings are equal\n");
	}else{
		printf("Strings are not equal!\n");
	}
	
	if(strcmp(string2, string3) == 0){
		printf("Strings are equal\n");
	}else{
		printf("Strings are not equal!\n");
	}
	
	
}
