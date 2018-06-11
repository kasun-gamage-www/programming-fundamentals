#include <stdio.h>

void f();
void f2();
void f3();

int myInt = 52;

int main(){
	f();
}

void f(){
	int myInt = 35;
	printf("myInt = %i\n",  myInt);
	f2();
	f3();
	f2();
	f3();
	f2();
	f2();
}

void f3(){
	printf("function 3\n");
}

void f2(){
	printf("myInt = %i\n",  myInt);
}
