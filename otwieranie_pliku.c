#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int otwieranie_pliku1(void) {
    FILE* plikwyniki = fopen("wyniki.csv", "w"); // Otwórz plik w trybie dopisywania
    if (plikwyniki == NULL) {
        printf("\n=================================\n");

        printf("Nie mozna otworzyc pliku.\n");

        printf("\n=================================\n");

    }
    printf("\n=================================\n");
    printf("udalo sie otworzyc plik \n");
    printf("\n=================================\n");
    return 1;
}