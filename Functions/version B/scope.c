#include <stdio.h>

int custF();
void secondF();

int x = 10;

int main(){
	int x = 30;
	
	printf("%d\n", x);
	
	custF();
	
	secondF(x);
}

int custF(){
	printf("%d\n", x);
}

void secondF(int x){
	x = x + 56;
	printf("%d", x);
}


