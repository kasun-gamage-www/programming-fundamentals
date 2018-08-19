#include <stdio.h>

int main(){
	int itemPrices[10];
	int total = 0;
	
	int i;
	for(i = 0; i < 10; i++){
		printf("Enter number %i : ", i);
		scanf("%i", &itemPrices[i]);
	}
	
	int j;
	for(j = 0; j < 10; j++){
		printf("value at itemPrices[%i] is : %i\n", j, itemPrices[j]);
		total += itemPrices[j]; // short hand for total = total + itemPrices[j];
	}
	
	printf("Total Price is %d", total);
}
