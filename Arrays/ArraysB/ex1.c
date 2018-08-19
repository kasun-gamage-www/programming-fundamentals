#include <stdio.h>

int values[] = {7584, 545, 450, 777, 666, 159};

int average();

int main(){
	printf("%i", average());
}

int average(){
	int i, sum = 0;
	for(i = 0 ; i < sizeof(values) / sizeof(values[0]); i++){
		sum += values[i];
	}
	
	return sum / sizeof(values) / sizeof(values[0]);
}
