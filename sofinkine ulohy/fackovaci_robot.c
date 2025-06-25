#include <stdio.h>
#include <unistd.h>  



void main_quest(char odpoved);

int main(){

	char odpoved;
	
	main_quest(odpoved);

	sleep(2);

	while (1){

	printf("chces pokracovat? y/n \n");
	char pokracovat;

	scanf(" %c",&pokracovat);

	if (pokracovat=='y'){
		sleep(1);
		printf("loading... \n");
		sleep(3);
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		main_quest(odpoved);

	}
	else if (pokracovat=='n'){
		sleep(1);
		printf("\n");
		printf("\n");
		printf("\n");
		sleep(1);
		printf("vypinam sa... \n");
		sleep(3);
		printf("\n");
		printf("\n");
		printf("\n");
		printf(".\n");
		printf(".\n");
		printf(".\n");
		printf(".\n");
		printf(".\n");
		printf(".\n");
		printf(".\n");
		printf(".\n");
		printf(".\n");
		printf(".\n");
		printf(".\n");
		printf(".\n");
		printf(".\n");
		printf(".\n");
		printf(".\n");
		printf(".\n");
		printf(".\n");
		printf(".\n");
		
		printf("_____________________ \n");
		printf("created by Peter Horvath. \n");
		sleep(2);
		break;
	}


	}

	





	return 0;
}



void main_quest(char odpoved){

	printf("Ahoj...\n");
	sleep(2);
	printf("ja som fackovaci robot \n");
	
	
	sleep(2);
	printf("chces facku? y/n \n");

	scanf(" %c",&odpoved);

	printf("loading... \n");
	sleep(2);


	if (odpoved=='y'){
		printf("facka \n");
		printf("\n");
		printf("\n");
		printf("\n");
	}
	else if (odpoved=='n'){
	sleep(1);
		printf("\n");
		printf("\n");
		printf("\n");
		sleep(1);
		printf("vypinam sa... \n");
		sleep(3);
		printf("\n");
		printf("\n");
		printf("\n");
		printf(".\n");
		printf(".\n");
		printf(".\n");
		printf(".\n");
		printf(".\n");
		printf(".\n");
		printf(".\n");
		printf(".\n");
		printf(".\n");
		printf(".\n");
		printf(".\n");
		printf(".\n");
		printf(".\n");
		printf(".\n");
		printf(".\n");
		printf(".\n");
		printf(".\n");
		printf(".\n");
		
		printf("_____________________ \n");
		printf("created by Peter Horvath. \n");
		sleep(2);
	
	}
}