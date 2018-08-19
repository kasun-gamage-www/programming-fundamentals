#include <stdio.h>
#define ARRAY_SIZE 5

int main(){
	float itemPrices[ARRAY_SIZE];
	
	printf("size of int : %d\n", sizeof(int));
	printf("size of double : %d\n", sizeof(double));
	
	printf("size of array : %d\n", sizeof(itemPrices));
	
	int index;
	for(index = 0; index < sizeof(itemPrices) / sizeof(itemPrices[0]); index++){
		printf("Enter item %i price : ", index);
		scanf("%f", &itemPrices[index]);
	}

	int j, total = 0;
	for(j = 0; j < sizeof(itemPrices) / sizeof(itemPrices[0]); j++){	
		printf("Item %i price : %f\n", j, itemPrices[j]);
		total = total + itemPrices[j]; // total += itemPrice[j];
	}
	printf("Total price is %i", total);
	
}
