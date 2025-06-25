#include <stdio.h>
#include <string.h>

int main(){

	char string[50];
	char reversed[50];
	int i=0;
	int j=0;
	int length =0;
	


	do{
	scanf("%s",string);
	

		while (string[length]!='\0'){

			length++;
		}



		int index_r = 0;
		int index_s = 1;
		int counter = 0;

		for(i=0;i<length+1;i++){

			if (string[j] == '\0'){

				
				while(counter!=length){

				reversed[index_r] = string[j-index_s];
				index_r ++;
				index_s ++;
				counter ++;
				}
			}

			j++;

		}
		reversed[length]='\0';

		printf("%s \n", reversed);


	}while(strcmp(string, "exit") != 0);


	return 0;
}