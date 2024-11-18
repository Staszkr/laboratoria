// PierwszyProgram_w_C.c
//Autor : Karol Tatar

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//To jest komentarz (Znak "//" Komnetuje pojedyńczą linie)

/*
A tu jest kilka linia zakomentowanych
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB
CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC
Ten typ komentarza można zastosować do całego bloku kodu
*/

// Przydatne skroty klawiszowe
//Ctrl+Shift+B - kompilacja projektu
//Ctr+F5 - uruchomienie programu
//F5 - uruchomienie programu z Debugerem
// Ctrl + Shift + S - zapisz wszystko
// Ctrl + S - zapisz
int main()
{
	int szczesliwyNumer;//W ten sposób definiujemy zmienną typu prostego, jest to zmienna lokalna
	szczesliwyNumer = 0;// To jest inicjalizacja zmiennej. Każda zmienna powinna być zainicjalizowana przed użcyiem
	// W ten sposób wyglądałaby definicja z inicjalizacją: int szczesliwyNumer=0;
	printf("To twoj pierwszy program w C\n");//Funckje printf lub puts służą do drukowania zawartości znajdującej się w akapicie, na ekranie konsoli
	puts("Ta funckja tez drukuje na ekranie konsoli");// Funkcja puts automatycznie dodaje znak "\n" na końcu teksktu 
	puts("Jaki jest twoj szczesliwy numer: ");
	scanf("%d", &szczesliwyNumer);// Ta funckja służy do pobierania zmiennych z konsoli. Proszę zauważyć obecność znaku "&" przed nazwą zmiennej
	printf("Twoj szczesliwy numer to %d\n", szczesliwyNumer);// W ten sposób możemy wyświetlić zmienną w postaci dzisiętnej
	return 0;
}
