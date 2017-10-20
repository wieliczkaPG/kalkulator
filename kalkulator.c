#include <stdio.h>

int mnoz(int a, int b) {printf("wynik mniozenia: %d\n", a*b); return a * b;}
int dodaj(int a, int b) {printf("wynik dodawania: %d\n", a+b); return a + b;}
int odejmij(int a, int b) {printf("wynik odejmowania: %d\n", a-b); return a - b;}
int dziel(int a, int b) {printf("wynik dzielenia: %d\n", a/b); return a / b;}

int main(void)
{

	int a = 2, b=5;   /* deklaracja wraz z inicjalizacja */
	char wybor;

	scanf("%c", &wybor); /* czytaj z konsoli i zapisz warttosc pod wybor */

/*if (wyrazenie) {blok jesli wyrazenie prawdziwe} else {blok jesliu wyrazenie falszywe}*/


	if(wybor == '*') 
{mnoz(a,b);}

	else if (wybor == '+')
{dodaj(a,b);}

	else if (wybor == '-')
{odejmij(a,b);}

	else if (wybor == '/')
{dziel(a,b);}

	else
{puts("nie znam dzialania");}

	putchar('\n');  /*znak konca lini*/

	return 0;
}
