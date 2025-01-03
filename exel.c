//generowanie wyników obliczeń na konsoli wyjsciowej
//generowanie wyników obliczen do pliku csv
//wyjscie z programu
#include <stdio.h>
#include <math.h>
#include <unistd.h>  
#include <string.h>
#include <stdlib.h>

 //deklaracja enum
enum{KONSOLA=1, PLIK=2, WYJSCIE=3 } stan_pracy;


int main(void){
    printf("\n=================================\n");
    //definicja zmiennych int
        int czas_dyskretny;
        
    //definicja zmiennych double
        double wspl_x;
        double wspl_y=0; 

    //wypisanie opcji do wyboru
   do{
            printf("wybierz opcje: \n");
            printf("1. KONSOLA \n");
            printf("2. PLIK \n");
            printf("3. Wyjscie \n");
            printf("\n=================================\n");
            scanf("%d", (int* )&stan_pracy);
            printf("\n=================================\n");
            if (stan_pracy<1||stan_pracy>3) {
            printf("Niepoprawna wartosc! Wpisz 1,2,3, aby kontynuowac.\n\n");
   }
}while (stan_pracy < 1 || stan_pracy > 3);
    
//zaczynanie pracy w zależności od wyboru
switch (stan_pracy){

//opcja KONSOLA
    case KONSOLA:
   
    //działanie w cmd
        printf ("wybrano pierwsza opcje \n");
        printf("podaj chwile czasowa n: ");
        scanf("%d", &czas_dyskretny);
 for(czas_dyskretny==1;czas_dyskretny<39;czas_dyskretny++){
        wspl_x=(float)cos((double)czas_dyskretny/4.0);
        wspl_y=(float)sin((double)czas_dyskretny/4.0);
        printf("\n=================================\n");
    
        printf("wyniki obliczen n dla czasu dyskretnego %d: x: %.2f, y: %.2f  \n", czas_dyskretny, wspl_x,wspl_y);

}
        wspl_x=(float)cos((double)czas_dyskretny/4.0);
        wspl_y=(float)sin((double)czas_dyskretny/4.0);
        printf("\n=================================\n");
    
        printf("wyniki obliczen n dla czasu dyskretnego %d: x: %.2f, y: %.2f  \n", czas_dyskretny, wspl_x,wspl_y);
    

	break;

//opcja PLIK
	case PLIK:

        printf("podaj chwile czasowa n: ");
        scanf("%d", &czas_dyskretny);

        wspl_x=(float)cos((double)czas_dyskretny/4.0);
        printf("\n=================================\n");
    
        printf("wyniki obliczen n dla czasu dyskretnego %d: x: %.2f, y: %.2f  \n", czas_dyskretny, wspl_x,wspl_y);

        FILE *plikwyniki = fopen("wyniki.csv", "w"); // Otwórz plik w trybie dopisywania
        if(plikwyniki==NULL){
            printf("\n=================================\n");

            printf("Nie mozna otworzyc pliku.\n");

            printf("\n=================================\n");

        }
            printf("\n=================================\n");
            printf("udalo sie otworzyc plik \n");
            printf("\n=================================\n");
        for(czas_dyskretny==1; czas_dyskretny<39;czas_dyskretny++){
        wspl_x=(float)cos((double)czas_dyskretny/4.0);

        fprintf(plikwyniki,"x:%.2f y: %.2f\n\n =======\n",wspl_x,wspl_y);
        
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



