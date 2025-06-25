#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

 	srand(time(NULL));


	char  code_or_phone;
	printf("Welcome to code and phone number generator!\n");
	//sleep(1);
	printf("Do you want to generate code or phone number?\n");
	printf("c/t?: ");
	scanf(" %c",&code_or_phone);


	if (code_or_phone =='c' ){

	int quantity;
	printf("how many digit code do you want? ");
	scanf("%d",&quantity);

	for(int i=0; i<quantity; i++ ){

 		int digit = (rand() % (10 - 0) + 0);
		printf("%d", digit);

	}
	printf(" \n");
	}

	else if (code_or_phone == 't'){

	int quantity;
	printf("how many phone numbers do you want? ");
	scanf(" %d",&quantity);

	
	for (int j = 0 ; j < quantity; j++){
	printf("09");


	for(int i=0; i<2; i++ ){

 		int digit = (rand() % (10 - 0) + 0);
		printf("%d", digit);
	}
	printf(" ");
	for(int i=0; i<3; i++ ){

 		int digit = (rand() % (10 - 0) + 0);
		printf("%d", digit);
	}
	printf(" ");
	for(int i=0; i<3; i++ ){

 		int digit = (rand() % (10 - 0) + 0);
		printf("%d", digit);
	}
	printf(" \n");

	}
	}	



	return 0;

}