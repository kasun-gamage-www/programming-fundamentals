#include<stdio.h>
#include<string.h>

int main( void ) {

	char list[] = "India,Pakistan,Russia,Malaysia,Vietnam,Japan";

	const char* tok = strtok(list, ",");
	
	while(tok != NULL){
		printf("%s\n", tok);
		tok = strtok(NULL, ",");
	}
	
	printf("%i", strlen(list));
	
	
}

