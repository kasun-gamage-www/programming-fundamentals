#include <stdio.h>
#include <string.h>

int main(){
	char longString[] = "Needle in a haystack Needle";
	char key[] = "Needle";
	char key2[] = "Hammer";
	
	printf("%.6s\n", strstr(longString, key));
	printf("%s\n", strstr(longString, key2));
}
