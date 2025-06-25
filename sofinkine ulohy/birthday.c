#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

// Funkcie na generovanie dátumov
char* generate_birthday(int *year, int *month, int *day);
int generate_year();
int generate_month();
int generate_day();
void find_matching_birthdays(char *array, int pocet_datumov);

int main() {
    srand(time(NULL));

    int year, month, day;
    int pocet_datumov;

    printf("Kolko nahodnych datumov mam vygenerovat? ");
    scanf("%d", &pocet_datumov);

    char *array = malloc(pocet_datumov * 12 * sizeof(char));

    for (int i = 0; i < pocet_datumov; i++) {
        char *birthday = generate_birthday(&year, &month, &day);
        strncpy(&array[i * 12], birthday, 12);
        free(birthday);
    }

    printf("\n-----------------------\nVygenerovane datumy:\n");
    for (int i = 0; i < pocet_datumov; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%c", array[i * 12 + j]);
        }
        printf("\n");
    }

    find_matching_birthdays(array, pocet_datumov);

    free(array);
    return 0;
}

// Generovanie celeho dátumu ako string
char* generate_birthday(int *year, int *month, int *day) {
    char *birthday = malloc(12 * sizeof(char));
    *year = generate_year();
    *month = generate_month();
    *day = generate_day();

    sprintf(birthday, "%04d.%02d.%02d", *year, *month, *day);
    return birthday;
}

int generate_year() {
    return rand() % (2025 - 1970 + 1) + 1970;
}

int generate_month() {
    return rand() % 12 + 1;
}

int generate_day() {
    return rand() % 31 + 1;
}

// Porovnanie zhod podľa mesiaca a dňa
void find_matching_birthdays(char *array, int pocet_datumov) {
    int real_match_count = 0;

    printf("\n-----------------------\nZhody podla mesiaca a dna:\n");

    for (int i = 0; i < pocet_datumov; i++) {
        char *date1 = &array[i * 12];
        char md1[6];
        strncpy(md1, &date1[5], 5); // ".MM.DD"
        md1[5] = '\0';

        for (int j = i + 1; j < pocet_datumov; j++) {
            char *date2 = &array[j * 12];
            char md2[6];
            strncpy(md2, &date2[5], 5);
            md2[5] = '\0';

            if (strcmp(md1, md2) == 0) {
                real_match_count++;
                printf("Zhodny par #%d:\n", real_match_count);
                printf(" - %s\n", date1);
                printf(" - %s\n", date2);
            }
        }
    }

    if (real_match_count == 0) {
        printf("Ziadne zhody sa nenasli.\n");
    } else {
        printf("\nCelkovo %d parov s rovnakym mesiacom a dnom.\n", real_match_count);
    }

    // Teoretický počet očakávaných zhod
    int total_pairs = pocet_datumov * (pocet_datumov - 1) / 2;
    double expected_matches = (double)total_pairs / 365.0;

    printf("\n-----------------------\nStatistika:\n");
    printf("Pocet moznych parov: %d\n", total_pairs);
    printf("Teoreticky ocakavany pocet zhod: %.2f\n", expected_matches);
    printf("Realny pocet zhod: %d\n", real_match_count);
    printf("Rozdiel: %.2f\n", fabs(expected_matches - real_match_count));
    if (expected_matches > 0) {
        printf("Percentualny rozdiel: %.2f%%\n", fabs(expected_matches - real_match_count) / expected_matches * 100.0);
    }
}





