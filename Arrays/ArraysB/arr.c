#include <stdio.h>

int main(){

	/*
	int item1price;
	int item2price;
	int item3price;
	int item4price;
	*/
	int itemPrices[10]; // itemPrices[0], itemPrices[1] .. itemPrices[9]
	
	int itemCodes[] = {1566, 1658, 1603, 6384, 1654};
	
	itemPrices[0] = 52;
	itemPrices[1] = 85;
	
	printf("Item 0 price : %i\n", itemPrices[0]);
	printf("Item 0 price : %i\n", itemCodes[4]);
	
}
