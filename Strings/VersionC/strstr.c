#include <stdio.h>
#include <string.h>

int main(){

	char* haystack = "Needle in a haystack Needle";
	
	char* key = "Needle";
	
	printf("%.6s\n", strstr(haystack, key));
	
	char* key2 = "Noodle";
	
	printf("%.6s\n", strstr(haystack, key2));
	
}
