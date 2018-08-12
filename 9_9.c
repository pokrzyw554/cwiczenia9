#include  <stdio.h>
double potega(double a, int b, int c, double d);	//musi zajebac rekurencje
int main(void)
{
    double wykladnik;
    double liczba, wynik;
    printf("no siema, popotenguje Tobie liczby\n");
    printf("NOWOSC! teraz zapierdalam rekurencje!\n");
    printf("podaj mnie jakas podstawe\n");
    scanf("%lf", &wykladnik);
    printf("i przez co jo potengujemy?\n");
    scanf("%lf", &liczba);
    printf("ok\n");
    wynik=potega(wykladnik, liczba,1,wykladnik);
    printf("wynik to %lf\n", wynik);
    printf("W REKURENCJI!\n");
    return 0;
}
double potega(double a, int b, int c, double d) /* definicja funkcji */
{
	//double save=d;
	
    if(a==0 && b ==0)
    {
        printf("oj panie, to nie zadziala\n");
        printf("zamienie Ci przez to poteznik na 1");
        b=1;
    }
   if(a==0)		
       return 0;
   if(b==0)
       return 1;
	a*=d;
	
	if(++c<b)	//dopoki counter jest mniejszy niz wykladnik
		a = potega(a,b,c,d);	//napierdala petle
   
return a; /* zwrot wartosci pot */
}
