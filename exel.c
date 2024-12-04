//generowanie wyników obliczeń na konsoli wyjsciowej
//generowanie wyników obliczen do pliku csv
//wyjscie z programu
#include <stdio.h>
#include <math.h>
#include <unistd.h>  
 
 //deklaracja enum
enum{KONSOLA=1, PLIK=2, WYJSCIE =3 } stan_pracy;


int main(void){

    //definicja zmiennych int
        int czas_dyskretny;

    //definicja zmiennych double
        double wspl_x;
        double wspl_y=0; 

    //wypisanie opcji do wyboru
            printf("wybierz opcje: \n");
            printf("1. KONSOLA \n");
            printf("2. PLIK \n");
            printf("3. Wyjscie \n");
            scanf("%d", (int* )&stan_pracy);

	
//zaczynanie pracy w zależności od wyboru
switch (stan_pracy){

//opcja KONSOLA
    case KONSOLA:

        printf ("wybrano pierwsza opcje \n");
        //  printf("podaj chwile czasowa n: ");
        // scanf("%d", &czas_dyskretny);

        // wspl_x=(float)cos((double)czas_dyskretny/4.0);
    
        //printf("wyniki obliczen n dla czasu dyskretnego %d: x: %.2f, y: %.2f  \n", czas_dyskretny, wspl_x,wspl_y);

	break;

//opcja PLIK
	case PLIK:

        printf ("wybrano druga opcje \n");

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
  sleep(3);
     return 0; 
}
