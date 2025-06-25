#include <stdio.h>
#include <unistd.h>



int main (){

	int year;
	int month;
	int day;
	int numerology;
	char string[20];
	char string_2[20];
	char string_3[20];
	char posledne_dvojcislie[5];
	int spocitany_den;
	int spocitany_mesiac;
	int final_number;

	printf("Vypocitam ti tvoje numerologicke cislo...\n");
	sleep(1);
	printf("Napis mi kedy si sa narodil/a\n");
	sleep(1);

	printf("Rok: ");
	scanf("%d",&year);
	printf("Mesiac: ");
	scanf("%d",&month);
	printf("Den: ");
	scanf("%d",&day);


	sprintf(string, "%d", year);  
	int spocitany_rok = (string[0] - '0') + (string[1] - '0') + (string[2] - '0') + (string[3] - '0');
	

	sprintf(string_2, "%d", month);  
	if (month<9){
		spocitany_mesiac = (string_2[0] - '0');
	}
	else{
		spocitany_mesiac = (string_2[0] - '0') + (string_2[1] - '0');

	}


	sprintf(string_3, "%d", day);  
	if (day<9){
		spocitany_den = (string_3[0] - '0');
	}
	else{
		spocitany_den = (string_3[0] - '0') + (string_3[1] - '0');

	}
	
	numerology = (spocitany_rok + spocitany_mesiac + spocitany_den);

	if (numerology>9){

		sprintf(posledne_dvojcislie, "%d", numerology);  
		final_number = (posledne_dvojcislie[0] - '0') + (posledne_dvojcislie[1] - '0');


	}
	else{
		numerology = final_number;
	}



	printf("tvoje numerologicke cislo je %d\n", final_number);

	printf("\n");


	if (final_number == 1){
		printf("Životné číslo 1 – Líder a Iniciátor\n");
		printf("Pozitíva:\n");
		printf("•	Silný a nezávislý, rád vedieš a rozhoduješ.\n");
		printf("•	Máš prirodzenú odvahu a silnú vnútornú motiváciu.\n");
		printf("•	Kreatívny mysliteľ, ktorý rád prináša nové nápady.\n");
		printf("•	Vydržíš tvrdo pracovať, aby si dosiahol svoje ciele.\n");
		printf("•	Si iniciátor zmien a rád si sám sebou.\n");

	}
	else if (final_number == 6){
		printf("Životné číslo 6 – Starostlivý Ochranca\n");
		sleep(2);
		printf("Pozitíva:\n");
		sleep(1);
		printf("•	Láskavý, ochranársky a verný.\n");
		printf("•	Veľmi zodpovedný, zvlášť v rodinných vzťahoch.\n");
		printf("•	Máš schopnosť vytvárať harmóniu a podporovať ostatných.\n");
		printf("•	Obetavý, ochotný pomôcť vždy, keď je to potrebné.\n");
		printf("•	Máš silný zmysel pre spravodlivosť a morálku.\n");
		sleep(2);
		printf("Negatíva:\n");
		sleep(1);
		printf("•	Môžeš byť príliš kontrolujúci alebo zasahujúci.\n");
		printf("•	Niekedy obetuješ seba pre druhých na úkor vlastného šťastia.\n");
		printf("•	Môžeš byť príliš kritický a náročný.\n");
		printf("•	Riziko závislosti od schválenia ostatných.\n");
		printf("•	Náchylný k preťaženiu povinnosťami.\n");
		printf("\n");
		printf("\n");
		
		
	}







	








	return 0;
}


