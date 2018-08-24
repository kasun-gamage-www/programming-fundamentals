#include <stdio.h>

int main(){
	char str[] = "India,Japan,South Korea,Iran,Malaysia";
	
	printf("%s\n", strtok(str, ","));
	
	printf("%s\n", strtok(NULL, ","));
	
	printf("%s\n", strtok(NULL, ","));
}
