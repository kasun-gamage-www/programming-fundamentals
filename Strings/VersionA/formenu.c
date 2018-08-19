#include <stdio.h>
#include <string.h>

int main(){
	int show;
	int id = 0;
	
	char names[10000] = "";
	
	for(show = 1; show != 0;){	
		char rec[20] = "";
		char strId[5];
		
		itoa(++id, strId, 10);	
		
		strcat(rec, strId);
		strcat(rec, " : ");
		
		char in[10] = "";
		printf("enter name\n");
		scanf("%s", in);
	
		strcat(rec, in);
		strcat(rec, " | ");
		
		strcat(names, rec);
		
		printf("\nenter more? 1 : yes, 0 : no");
		
		scanf("%i", &show);
		system("cls");
	}
	
	printf("%s", names);
	
}
