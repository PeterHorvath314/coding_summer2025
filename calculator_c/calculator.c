#include <stdio.h>


int main (){

	float a;
	float b;
	char operation;
	

	printf("zadaj cislo: ");
	scanf("%f", &a);

	printf("zadaj cislo: ");
	scanf("%f", &b);

	printf("vyber si operaciu (+,-,*,/,^): ");

	scanf(" %c", &operation);

	if(operation == '+'){
		float sucet = a+b;
		printf("sucet je %f \n", sucet);
	}
	else if(operation == '-'){
		float rozdiel = a-b;
		printf("rozdiel je %f \n", rozdiel);
	}
	else if(operation == '*'){
		float sucin = a*b;
		printf("sucin je %f \n", sucin);
	}
	else if(operation == '/'){
		float podiel = a/b;
		printf("podiel je %f \n", podiel);
	}
	







	return 0;
}


