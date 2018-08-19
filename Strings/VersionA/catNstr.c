#include <stdio.h>
#include <string.h>

int main(){
	
	char str[] = "Needle in the haystack and haystack";
	
	char key[] = "in";
	
	char* point = strstr(str, key);
	
	printf("%.6s", point);

}
