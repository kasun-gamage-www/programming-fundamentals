//write a function that returns the circumference of a circle
//based on the given radius
//perimeter = 2 * (pie) * radius
//assume (pie) = 3.14
//input/output may have a decimal part

#include <stdio.h>
float circumference(float radius){
	return 6.28 * radius;
}

int main(){
	printf("circumference of circle of radius 15 = %f\n", circumference(15));
	printf("circumference of circle of radius 36 = %f\n", circumference(36));
	printf("circumference of circle of radius 4 = %f\n", circumference(4));
}




