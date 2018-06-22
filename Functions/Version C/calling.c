#include<stdio.h>

f();
f2();
f3();

int main(){
	f1();
	f2();
	return 0;
}

f1(){
	printf("in f 1\n");
	f2();
}

f2(){
	printf("in f 2\n");
	f3();
}

f3(){
	printf("in f 3\n");
}
