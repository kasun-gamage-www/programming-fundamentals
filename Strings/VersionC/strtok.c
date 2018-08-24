#include <stdio.h>
#include <string.h>

int main(){
	
	char longString[] = "A long sentence with a lot of words";
	
	char commaString[] = "Apple,Microsoft,Facebook,Google,Exon Mobil";
	
	char* firstToken = strtok(longString, " ");
	
	char* secondToken = strtok(NULL, " ");
	
	printf("%s\n", firstToken);
	printf("%s\n", secondToken);
	
	char* token = strtok(commaString, ",");
	
	do{
		printf("token --------> %s\n", token);
		token = strtok(NULL, ",");
	}while(token != NULL);

}
