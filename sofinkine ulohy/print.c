#include <stdio.h>





int main(){



	char word[100];
	int rows;
	int cols;
	printf("ake slovo chces vyprintovat?\n");
	scanf("%s",word);
	getchar();
	printf("kolko riadkov\n");
	scanf(" %d",&rows);
	printf("kolko stlpcov?\n");
	scanf(" %d",&cols);


	int i;
	int j;
	for(i=0; i<rows; i++){
		printf("\n%s ",word);
		
		for(j=1; j<cols; j++){
			printf("%s ",word);

		}

	}

	printf(" \n");



	return 0;

}
