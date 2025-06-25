#include <stdio.h>


int main(){

	int first_row ;
	printf("aku velku pyramidu chces? (max 130) ");
	scanf(" %d", &first_row);




	
	int i;
	int j;
	//prvy riadok minus 1
	
	int riadky = first_row;
	int pocet_riadkov=0;
	

	while (riadky > 0) {
    pocet_riadkov++;
    riadky -= 2;
	}



	



	printf("%d ",pocet_riadkov);
	printf("x %d \n",first_row);


	int n = 0;
	int k = 0;
	int medzera = 1;
	for (i=0;i<pocet_riadkov;i++){

		printf("*");
		//(b-n-1) minus 1 kvoli spravnemu pocitaniu prveho riadku 
		for (j=0;j<(first_row-n-1);j++){

		printf("*");
		
		}
		n=n+2;
		printf("\n");
		
		for (k=0;k<medzera;k++){

		printf(" ");
		
		}
		medzera ++;

	}
	printf("\n ");



	

	printf("\n ");
	printf("\n");



	return 0;
}