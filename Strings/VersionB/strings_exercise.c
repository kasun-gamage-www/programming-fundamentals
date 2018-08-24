/*
1. Create a console app which
asks the user to enter a username
and a password.
repeat this process until user decides to terminate.

store all the usernames and passwords from the user
in a string.

eg:
"Erik : 123, sam : 777"

2. Ask the user to enter a username
check whether it exists and if it doesn't show an error msg
else ask the user to enter the password and check whether
it is correct.
*/
#include <stdio.h>
#include <string.h>

int main(){
	char records[1000] = "";
	int next = 0;
	
	do{
		char userInput[12] = "";
		printf("Enter username\n");
		scanf("%s", &userInput);
		strcat(records, userInput);
		
		strcat(records, " : ");
		
		printf("Enter password\n");
		scanf("%s", &userInput);
		strcat(records, userInput);
		
		printf("Do you want to continue? 1 : yes, 0 : no\n");
		scanf("%i", &next);
		
		if(next){
			strcat(records, ", ");
		}
		system("cls");
	}while(next);
	
	printf("%s\n", records);
	
	char userInput[12] = "";
	printf("Enter Username\n");
	scanf("%s", &userInput);
	
	char* token = strtok(records, ", ");
	while(NULL != token){
		char* username = strtok(token, " : ");
		if(strcmp(userInput, username) == 0){
			char* password = strtok(NULL, " : ");
			printf("Enter Password\n");
			scanf("%s", &userInput);
			if(strcmp(userInput, password) == 0){
				printf("Login Successful!\n");
				getchar();
			
				return 0;
			}else{
				printf("Wrong Password!\n");
		
				return 0;
			}
		}
		token = strtok(NULL, ", ");
	}
	printf("user does not exist");
		
	
}
