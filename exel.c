//generowanie wyników obliczeń na konsoli wyjsciowej
//generowanie wyników obliczen do pliku csv
//wyjscie z programu
#include <stdio.h>
#include <math.h>
#include <unistd.h>  

	enum{KONSOLA=1, PLIK=2} stan_pracy;
int main(void)
{
	stan_pracy=KONSOLA;
    int czas_dyskretny;
    double wspl_x, wspl_y; 
	

switch (stan_pracy){

case KONSOLA:


    printf("podaj chwile czasowa n: ");
    scanf("%d", &czas_dyskretny);

    wspl_x=(float)cos((double)czas_dyskretny/4.0);

    printf("wyniki obliczen n dla czasu dyskretnego %d: x: %.2f, y: %.2f  \n", czas_dyskretny, wspl_x,wspl_y);

	break;
	case PLIK:

	break;
	default:

	break;

  }
  sleep(3);
     return 0; 
}
