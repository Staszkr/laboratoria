//generowanie wyników obliczeń na konsoli wyjsciowej
//generowanie wyników obliczen do pliku csv
//wyjscie z programu
#include <stdio.h>
#include <math.h>
//#include <unistd.h>  
#include <string.h>
#include <stdlib.h>
#include "menu.h"


 //deklaracja enum
enum{KONSOLA=1, PLIK=2, WYJSCIE=3 } stan_pracy;
typedef struct wiersz_danych
{
    int czas_dyskretny;
    double wspl_x, wspl_y;
}wiersz_danych_t;


int main(void){
    printf("\n=================================\n");
    //definicja zmiennych int
        int stan_pracy;
        stan_pracy = menu1(&stan_pracy);

        wiersz_danych_t wiersz;

    // //definicja zmiennych double
    //     double wspl_x=0;
    //     double wspl_y=0; 

    //wypisanie opcji do wyboru


    
//zaczynanie pracy w zależności od wyboru
switch (stan_pracy){

//opcja KONSOLA
    case KONSOLA:
   
    //działanie w cmd
        printf ("wybrano pierwsza opcje \n");
        printf("podaj chwile czasowa n: ");
        scanf("%d", &wiersz.czas_dyskretny);
        
 for(wiersz.czas_dyskretny==1;wiersz.czas_dyskretny<39;wiersz.czas_dyskretny++){
        wiersz.wspl_x=(float)cos((double)wiersz.czas_dyskretny/4.0);
        wiersz.wspl_y=(float)sin((double)wiersz.czas_dyskretny/4.0);
        printf("\n=================================\n");
    
        printf("wyniki obliczen n dla czasu dyskretnego %d: x: %.2f, y: %.2f  \n", wiersz.czas_dyskretny, wiersz.wspl_x,wiersz.wspl_y);

}
        wiersz.wspl_x=(float)cos((double)wiersz.czas_dyskretny/4.0);
        wiersz.wspl_y=(float)sin((double)wiersz.czas_dyskretny/4.0);
        printf("\n=================================\n");
    
        printf("wyniki obliczen n dla czasu dyskretnego %d: x: %.2f, y: %.2f  \n", wiersz.czas_dyskretny, wiersz.wspl_x , wiersz.wspl_y );
	break;

//opcja PLIK
	case PLIK:

        printf("podaj chwile czasowa n: ");
        scanf("%d", &wiersz.czas_dyskretny);

        wiersz.wspl_x=(float)cos((double)wiersz.czas_dyskretny/4.0);
        wiersz.wspl_y=(float)sin((double)wiersz.czas_dyskretny/4.0);
        printf("\n=================================\n");
    
        FILE *plikwyniki = fopen("wyniki.csv", "w"); // Otwórz plik w trybie dopisywania
        if(plikwyniki==NULL){
            printf("\n=================================\n");

            printf("Nie mozna otworzyc pliku.\n");

            printf("\n=================================\n");

        }
            printf("\n=================================\n");
            printf("udalo sie otworzyc plik \n");
            printf("\n=================================\n");
        for(wiersz.czas_dyskretny == 1; wiersz.czas_dyskretny<39;wiersz.czas_dyskretny++){
        wiersz.wspl_x=(float)cos((double)wiersz.czas_dyskretny/4.0);
        wiersz.wspl_y=(float)sin((double)wiersz.czas_dyskretny/4.0);

        fprintf(plikwyniki,"x:%.2f y: %.2f\n\n =======\n",wiersz.wspl_x,wiersz.wspl_y);
        
        }fclose(plikwyniki);
	break;

//opcja WYJSCIE
    case WYJSCIE:

        printf("zamykanie programu... \n");
    
    break;

//inny wybor
	default:

        printf("nieprawidlowa opcja!! \n");

	break;

  }
     return 0; 
    }