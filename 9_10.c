/* binar.c -- wyswietla liczbe calkowita w postaci dwojkowej */
#include <stdio.h>
void do_podst(unsigned long n, int system);
int main(void)
{
	unsigned long liczba;
	int system;
	printf("Podaj liczbe calkowita (q konczy program):\n");
	while (scanf("%ld", &liczba) == 1)
		{
		printf("dobra, teraz jeszcze czy ma to byc zapis:\n");
		printf("dwojkowy(2) osemkowy(8) czy dziesietny(10)\n ");		
		scanf("%d", &system);
		printf("Odpowiednik dwojkowy: ");
		do_podst(liczba, system);
		putchar('\n');
		printf("Podaj liczbe calkowita (q konczy program):\n");
		}
	printf("Gotowe.\n");
	return 0;
}
void do_podst(unsigned long n, int sys)		// troche glupie jest to ze mialo tez zamieniac dec na dec
{
	int r;
	if(sys==2)
		{
		r = n % 2;
		if (n >= 2)
			do_podst(n / 2, sys);
		putchar(r == 0 ? '0' : '1');
		return;
		}
	else if(sys==8)
		{
		r=n%8;
		if(n>=8)
			do_podst(n/8,sys);
		printf("%d",r);
		}
	else
	{printf("wyjebalo do elsa\n");
	}

}
