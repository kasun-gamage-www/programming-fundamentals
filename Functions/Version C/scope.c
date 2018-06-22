#include<stdio.h>

f();
f2();

int x = 50;

int main(){
	
	f1();
	f2(41);
	printf("%d\n", x);
	
	return 0;
}

f1(){
	//x = 30; - reassign
	int x = 30; //redeclare
	printf("%d\n", x);
}

f2(int x){
	x = 458 + x;
	printf("%d\n", x);
}

