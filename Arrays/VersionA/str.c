#include <stdio.h>
#include <string.h>

int main(){
	char string1[] = {'h', 'e', 'l', 'l', 'o'};
	char string2[] = "world!";
	char string3[] = "hello";
	
	int isSame = strcmp(string1, string3);//(string1 == string2) : does not give the inde
	
	if(isSame == 0){
		printf("String are equal");
	}else{
		printf("String are not equal");
	}
	
	//strstr - substring - "LONG text" => "LONG"
	//strtok - item1, item2 - "item1" "item2"
	//strcpy / strncpy
	//strcat - "Hello" + "World!" : "Hello World!"
	
}
