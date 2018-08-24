#include <stdio.h>
#include <string.h>

int main(){
	
	
	char hStr[] = "hello";
	char wStr[] = "world!";
	
	strncpy(wStr, hStr, 3);
	
	printf("%s", wStr);
}
