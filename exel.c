
#include <stdio.h>
#include <math.h>  
#include <string.h>
#include <stdlib.h>
#include "menu.h"
#include "obliczanie.h"

typedef struct wiersz_danych
{
    double argument;
    double wynik;
}wiersz_danych_t;
jdjdjdjdj

int main(void){
    //definicja zmiennych int
        int stan_pracy;

        wiersz_danych_t wiersz;

        wiersz.argument = 0;
        wiersz.wynik = 0;



    
        FILE *plikwyniki = fopen("C:\\Users\\Stachu\\Desktop\\dane_lab.csv", "w"); // Otwórz plik w trybie dopisywania
        if(plikwyniki==NULL){
            printf("\n=================================\n");

            printf("Nie mozna otworzyc pliku.\n");

            printf("\n=================================\n");

        }
            printf("\n=================================\n");
            printf("udalo sie otworzyc plik \n");
            printf("\n=================================\n");
            //obliczanie1(&wiersz.argument, &wiersz.wynik);
            //fprintf(plikwyniki, "arg:%.f wynik: %.f\n\n =======\n", wiersz.argument, wiersz.wynik);

           for(wiersz.argument == 1; wiersz.argument <30; wiersz.argument++){
        obliczanie1(&wiersz.wynik,&wiersz.argument);

        fprintf(plikwyniki,"%.f ;%.f\n",wiersz.wynik,wiersz.argument);
        
        }fclose(plikwyniki);

        printf("----------\n");
        printf("|Arg|Exp|\n");
        printf("----------\n");
        wiersz.argument = 0;
        obliczanie1(&wiersz.wynik, &wiersz.argument);

        printf("|0|%.f|\n", wiersz.wynik);
        printf("----------\n");

        wiersz.argument = 10;
        obliczanie1(&wiersz.wynik, &wiersz.argument);
        printf("|10|%.f|\n", wiersz.wynik);

        printf("----------\n");
        wiersz.argument = 20;
        obliczanie1(&wiersz.wynik, &wiersz.argument);
        printf("|20|%.f|\n", wiersz.wynik);
        printf("----------\n");
        wiersz.argument = 30;
        obliczanie1(&wiersz.wynik, &wiersz.argument);
        printf("|30|%.f|\n",wiersz.wynik);
        printf("----------\n");

     return 0; 
    }