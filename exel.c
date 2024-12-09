//generowanie wyników obliczeń na konsoli wyjsciowej
//generowanie wyników obliczen do pliku csv
//wyjscie z programu
#include <stdio.h>
#include <math.h>
#include <unistd.h>  
#include <string.h>
#include <stdlib.h>

 void replace_comma_with_dot(char *str) {
    while (*str) {
        if (*str == ',') {
            *str = '.';
        }
        str++;
    }
}
 //deklaracja enum
enum{KONSOLA=1, PLIK=2, WYJSCIE=3 } stan_pracy;


int main(void){
    printf("\n=================================\n");
    //definicja zmiennych int
        int czas_dyskretny;
        
    //definicja zmiennych double
        double wspl_x;
        double wspl_y=0; 

    //definicja zmiennych char
        char linia[100];

    //wypisanie opcji do wyboru
    
            printf("wybierz opcje: \n");
            printf("1. KONSOLA \n");
            printf("2. PLIK \n");
            printf("3. Wyjscie \n");
            printf("\n=================================\n");
            scanf("%d", (int* )&stan_pracy);

    printf("\n=================================\n");
	
//zaczynanie pracy w zależności od wyboru
switch (stan_pracy){

//opcja KONSOLA
    case KONSOLA:
    //działanie w cmd
        printf ("wybrano pierwsza opcje \n");
        printf("podaj chwile czasowa n: ");
        scanf("%d", &czas_dyskretny);

        wspl_x=(float)cos((double)czas_dyskretny/4.0);
        printf("\n=================================\n");
    
        printf("wyniki obliczen n dla czasu dyskretnego %d: x: %.2f, y: %.2f  \n", czas_dyskretny, wspl_x,wspl_y);

//porownanie funkcji z funkcja z exela
FILE *plikexel= fopen("arkusz_exel.csv", "r");


        if(plikexel == NULL){//jesli plik exel sie nie otwiera

            printf("\n=================================\n");

            printf("Nie mozna otworzyc pliku.\n");

            printf("\n=================================\n");

            sleep(10);

                
        return 1;
        }

        //jesli sie otwiera: 
            printf("\n=================================\n");
            
            printf("udalo sie otworzyc plik \n");
            printf("\n=================================\n");
        
        while (fgets(linia,sizeof(linia),plikexel)){

            double wartosci[100];
            int kolumna=0;        
            
            char *token = strtok(linia, ",");
            
        while (token) {
            wartosci[kolumna++] = strtof(token, NULL); // Konwersja na double
            token = strtok(NULL, ",");
            }
                    if (wartosci[0] == czas_dyskretny) {
            printf("Wartosc w ostatniej kolumnie tego wiersza: %.2f\n", wartosci[kolumna - 1]);
            fclose(plikexel); // Zamknij plik przed zakończeniem programu

            sleep(10);
            return 0;
        }
        }
        

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
  sleep(10);
     return 0; 
    }


