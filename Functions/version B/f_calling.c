#include <stdio.h>

void f1();
void f2();
void f3();

int main(){
	f1();
	f2();
	f1();
}

void f1(){
	printf("In f 1\n");
	f3();
	f2();
}

void f2(){
	printf("In f 2\n");
}

void f3(){
	printf("In f 3\n");
}

