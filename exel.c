//generowanie wyników obliczeń na konsoli wyjsciowej
//generowanie wyników obliczen do pliku csv
//wyjscie z programu
#include <stdio.h>
#include <math.h>
#include <unistd.h>  
enum{KONSOLA, PLIK} stan_pracy;

	int pobrane;
    int czas_dyskretny;
    double wsp_x; 
	double y;
	
int main(void)
{
printf("podaj numer: %d\n", stan_pracy);



switch (stan_pracy){

case KONSOLA:


    printf("podaj chwile czasowa n: ");
    scanf("%d", &czas_dyskretny);

    wsp_x=(float)cos((double)czas_dyskretny/4.0);

    printf("wyniki obliczen n dla czasu dyskretnego %d: x: %.2f, y: %.2f  \n", czas_dyskretny, wsp_x,y);
	break;
	case PLIK:

	break;
	default:

	break;

  }
  sleep(3);
     return 0; 
}
