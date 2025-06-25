#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <math.h>


int main() {

	int hearts = 3;
	int score = 0;
	int min = 1;
	int max = 10;
	
	system("clear");

	do {
    srand(time(NULL));

	
	
	
	int x = rand() % (max - min) + min;
	int y = rand() % (max - min) + min;
	int operation = rand() % (5 - 1) + 1;
	
	int new_x;

	printf("                     score: %d  hearts: %d\n",score,hearts);

	switch (operation){
		//+
		case 1:
			printf("%d + %d = ",x,y);
			
			break;
		//-
		case 2:
			printf("%d - %d = ",x,y);
			
			break;

		//*
		case 3:
			printf("%d * %d = ",x,y);
			
			break;
		
		//÷
		case 4: {
    // Zoznam povolených výsledkov: celé čísla, max 2 desatinné miesta, prípustné tretiny
    float allowed_results[] = {
        0.3f, 0.6f, 0.9f,
        0.25f, 0.5f, 0.75f,
        1.0f, 1.25f, 1.5f, 1.75f,
        2.0f, 2.25f, 2.5f, 2.75f,
        3.0f
    };
    int count = sizeof(allowed_results) / sizeof(allowed_results[0]);

    float result;
    int divisor, dividend;
    float product;

    do {
        result = allowed_results[rand() % count];  // vyber náhodný výsledok
        divisor = rand() % 9 + 1;                  // deliteľ od 1 do 9
        product = result * divisor;                // dopočítaj delenca (y)
    } while (fabsf(product - (int)product) > 0.0001f);  // musí byť celé číslo

    y = (int)product;
    new_x = divisor; 

    printf("%d ÷ %d = ", y, new_x);
    break;
	}

		default:
			break;

	}




	float solution;

	scanf(" %f",&solution);

	

	
	switch (operation){
		//+
		case 1:
			if ((float)x+(float)y==(float)solution){
				score++;
				printf(" correct\n");
				sleep(1);
			}
			else{
				hearts--;
				float equals = (float)x + (float)y;
				printf("false , correct answewr is :%f \n", equals);
				sleep(1);
			}
			
			break;
		//-
		case 2:
		if ((float)x-(float)y==(float)solution){
				score++;
				printf(" correct\n");
				sleep(1);

			}
			else{
				hearts--;
				float equals = (float)x - (float)y;
				printf("false , correct answewr is :%f \n", equals);
				sleep(1);
			}
			
			
			break;

		//*
		case 3:
		if ((float)x*(float)y==(float)solution){
				score++;
				printf(" correct\n");
				sleep(1);

			}
			else{
				hearts--;
				float equals = (float)x * (float)y;
				printf("false , correct answewr is :%f \n", equals);
				sleep(1);
			}
			
			
			break;
		
		//÷
		case 4: {
		float correct = (float)y / new_x;
		if (fabs(correct - solution) < 0.01f) { // tolerancia na 2 desatinné miesta
			score++;
			printf(" correct\n");
		} else {
			hearts--;
			printf("false , correct answer is : %.2f\n", correct);
		}
		sleep(1);
		break;
		}

		default:
			break;

	
	}
	system("clear");

if (score < 10) {
    max = 10;
}
else if (score <= 20) {
    max = 20;
}
else if (score <= 30) {
    max = 50;
}
else if (score <= 40) {
    max = 100;
}
else if (score <= 50) {
    max = 200;
}





	} while (hearts!=0);

	if (hearts==0){


		printf ("\nGAME OVER\n");
		printf ("\nyour score is: %d\n", score);


	}





 


    return 0; 
}
