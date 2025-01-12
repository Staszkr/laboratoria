#include <stdio.h>
#include <math.h> 
#include <string.h>
#include <stdlib.h>
#include "menu.h"

int menu1(int* stan) {
    int opcja;
    do {
        printf("\n=================================\n");
        printf("wybierz opcje: \n");
        printf("1. KONSOLA \n");
        printf("2. PLIK \n");
        printf("3. Wyjscie \n");
        printf("\n=================================\n");
        scanf("%d", (int*)&opcja);
        printf("\n=================================\n");
        if (opcja < 1 || opcja>3) {
            printf("Niepoprawna wartosc! Wpisz 1,2,3, aby kontynuowac.\n\n");
        }
    } while (opcja < 1 || opcja > 3);
    stan = opcja;
    return stan;
}