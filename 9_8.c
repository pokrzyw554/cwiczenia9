#include  <stdio.h>
double potega(double a, int b);
int main(void)
{
    double wykladnik;
    double liczba, wynik;
    printf("no siema, popotenguje Tobie liczby\n");
    printf("podaj mnie jakas podstawe\n");
    scanf("%lf", &wykladnik);
    printf("i przez co jo potengujemy?\n");
    scanf("%lf", &liczba);
    printf("ok\n");
    wynik=potega(wykladnik, liczba);
    printf("wynik to %lf\n", wynik);
    return 0;
}
double potega(double a, int b) /* definicja funkcji */
{
double pot = 1;
int i;

    if(a==0 && b ==0)
    {
        printf("oj panie, to nie zadziala\n");
        printf("zamienie Ci przez to poteznik na 1");
        b=1;
    }
   if(a==0)		//wrzuc to po sprawdzaniu a && b
       return 0;
   if(b==0)
       return 1;
   
    for(i = 1; i <= b; i++)
        pot *= a;
return pot; /* zwrot wartosci pot */
}
