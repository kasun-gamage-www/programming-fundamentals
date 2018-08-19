#include <stdio.h>
#include <string.h>

int main(){
	char string1[] = {'h', 'e', 'l', 'l', 'o'};
	char string2[] = "world!";
	char string3[] = "hello";
	
	if(strcmp(string1, string2) == 0){
		printf("strings are equal");
	}else{
		printf("strings are NOT equal");
	}
	
}

//strstr "Long String of chars" => "chars"
//strtok "Hello World!" => "Hello", "World!"
//strcat "Hello", "World" = > "Hello World"
//strlen
